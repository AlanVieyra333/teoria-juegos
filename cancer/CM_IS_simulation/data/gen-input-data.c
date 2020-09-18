#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>

#define TOTAL_FILES 150
#define MAX_AGE 9
#define MIN_AGE 6

char* levels[3] = {"debil", "medio", "fuerte"};
typedef enum { WEAK, MEDIUM, STRONG } level_t;
FILE* f;

void gen(level_t is_level, level_t cancer_level) {
  int prop_is_level = (is_level * 2 + 1) * 15;
  int prop_cancer_level = (cancer_level * 2 + 1) * 15;

  fprintf(f, "No.-of-initial-tumor-cells,%i\n", rand() % 25 + prop_cancer_level);
  fprintf(f, "No.-of-initial-neutrophils-cell,%i\n", (int) ((rand() % 25 + prop_is_level) * 0.34));
  fprintf(f, "No.-of-initial-macrophages-cells,%i\n", (int) ((rand() % 25 + prop_is_level) * 0.34));
  fprintf(f, "No.-of-initial-natural-killers-cells,%i\n", (int) ((rand() % 25 + prop_is_level) * 0.34));

  fprintf(f, "recruit-natural-killers,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "ProbOfSAttackSuccesByNk,%i\n", prop_is_level);

  fprintf(f, "recruit-macrophages,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "ProbOfSuccesOfInterac-MacrTum,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "ProbOfSuccesOf-tam1,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "ProbOfChange-to-tam1-or-tam2,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "No-of-activating-tumor-cells-by-tam2,%i\n", rand() % 25 + prop_cancer_level);
  fprintf(f, "No-of-desactivating-tumor-cells-by-tam1,%i\n", rand() % 25 + prop_is_level);

  fprintf(f, "recruit-neutrophils,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "ProbOfSuccesOfInterac-NeutTum,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "ProbOfSuccesOf-tan1,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "ProbOfChange-to-tan1-or-tan2,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "No-of-activating-tumor-cells-by-tan2,%i\n", rand() % 25 + prop_cancer_level);
  fprintf(f, "No-of-desactivating-tumor-cells-by-tan1,%i\n", rand() % 25 + prop_is_level);

  fprintf(f, "max-age-tam1,%d\n", (rand() % (MAX_AGE - MIN_AGE + 1)) + MIN_AGE);
  fprintf(f, "max-age-tam2,%d\n", (rand() % (MAX_AGE - MIN_AGE + 1)) + MIN_AGE);
  fprintf(f, "max-age-tan1,%d\n", (rand() % (MAX_AGE - MIN_AGE + 1)) + MIN_AGE);
  fprintf(f, "max-age-tan2,%d\n", (rand() % (MAX_AGE - MIN_AGE + 1)) + MIN_AGE);
  fprintf(f, "max-age-nk,%d\n", (rand() % (MAX_AGE - MIN_AGE + 1)) + MIN_AGE);

  fprintf(f, "max-tumors,5000\n");
  
  int diff_level = abs(is_level - cancer_level);
  if (diff_level == 2) {
    fprintf(f, "No.ticks,%d\n", 20);
  } else if (diff_level == 1) {
    fprintf(f, "No.ticks,%d\n", 25);
  } else if (diff_level == 0) {
    fprintf(f, "No.ticks,%d\n", 30);
  }

  fprintf(f, "No.-of-initial-treg-cells,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "No.-of-initial-helper-cells,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "ProbOfSuccesOfInterac-Th-Tum,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "ProbOfChange-thcells-to-thcells-,%i\n", rand() % 25 + prop_is_level);
  fprintf(f, "ProbOfAttackSuccesByCd8,%i\n", rand() % 25 + prop_is_level);

  fprintf(f, "x0-sigmoide-is,%i\n", rand() % 31 + ((is_level - 2) * - 1) * 20 + 15);
  fprintf(f, "x0-sigmoide-tumor,%i\n", rand() % 31 + ((cancer_level - 2) * - 1) * 20 + 15);
}

void gen_data_by_combination(level_t is_level, level_t cancer_level) {
  char folder[100], filename[100];

  sprintf(folder, "%s-%s", levels[is_level], levels[cancer_level]);
  mkdir(folder, 0755);

  for (size_t i = 1; i <= TOTAL_FILES; i++) {
    sprintf(filename, "%s/input_values%d.csv", folder, i);
    f = fopen(filename, "w");

    if (f == NULL) {
      fprintf(stderr, "Error en la creacioin del archivo %s.\n", filename);
      break;
    } else {
      gen(is_level, cancer_level);
    }
    fclose(f);
  }
}

void gen_data() {
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      gen_data_by_combination(i, j);
    }
  }
}

int main() {
  srand(time(NULL));

  gen_data();

  return 0;
}
