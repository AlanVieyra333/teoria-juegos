#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>

#define TOTAL_FILES 150
#define NO_TICKS 20

char* levels[3] = {"debil", "medio", "fuerte"};
typedef enum { WEAK, MEDIUM, STRONG } level_t;
FILE* f;

void gen_weak_weak() {
  fprintf(f, "No.-of-initial-tumor-cells,%i\n", rand() % 34);
  fprintf(f, "No.-of-initial-neutrophils-cell,%i\n", rand() % 34);
  fprintf(f, "No.-of-initial-macrophages-cells,%i\n", rand() % 34);
  fprintf(f, "No.-of-initial-natural-killers-cells,%i\n", rand() % 34);
  fprintf(f, "recruit-neutrophils,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOfInterac-NeutTum,%i\n", rand() % 34);
  fprintf(f, "ProbOfChange-to-tan1-or-tan2,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOf-tan1,%i\n", rand() % 34);
  fprintf(f, "No-of-desactivating-tumor-cells-by-tan1,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOf-tam1,%i\n", rand() % 34);
  fprintf(f, "recruit-macrophages,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOfInterac-MacrTum,%i\n", rand() % 34);
  fprintf(f, "ProbOfChange-to-tam1-or-tam2,%i\n", rand() % 34);
  fprintf(f, "recruit-natural-killers,%i\n", rand() % 34);
  fprintf(f, "ProbOfSAttackSuccesByNk,%i\n", rand() % 34);
  fprintf(f, "No-of-activating-tumor-cells-by-tan2,%i\n", rand() % 34);
  fprintf(f, "No-of-activating-tumor-cells-by-tam2,%i\n", rand() % 34);
  fprintf(f, "max-tumors,5000\n");
  fprintf(f, "No.ticks,%d\n", NO_TICKS);
  fprintf(f, "max-age-tam1,10\n");
  fprintf(f, "max-age-tam2,10\n");
  fprintf(f, "max-age-tan1,10\n");
  fprintf(f, "max-age-tan2,10\n");
  fprintf(f, "max-age-nk,10\n");
  fprintf(f, "No.-of-initial-treg-cells,%i\n", rand() % 34);
  fprintf(f, "No.-of-initial-helper-cells,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOfInterac-Th-Tum,%i\n", rand() % 34);
  fprintf(f, "ProbOfChange-thcells-to-thcells-,%i\n", rand() % 34);
  fprintf(f, "ProbOfAttackSuccesByCd8,%i\n", rand() % 34);
}

void gen_weak_medium() {
  fprintf(f, "No.-of-initial-tumor-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "No.-of-initial-neutrophils-cell,%i\n", rand() % 34);
  fprintf(f, "No.-of-initial-macrophages-cells,%i\n", rand() % 34);
  fprintf(f, "No.-of-initial-natural-killers-cells,%i\n", rand() % 34);
  fprintf(f, "recruit-neutrophils,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOfInterac-NeutTum,%i\n", rand() % 34);
  fprintf(f, "ProbOfChange-to-tan1-or-tan2,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOf-tan1,%i\n", rand() % 34);
  fprintf(f, "No-of-desactivating-tumor-cells-by-tan1,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOf-tam1,%i\n", rand() % 34);
  fprintf(f, "recruit-macrophages,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOfInterac-MacrTum,%i\n", rand() % 34);
  fprintf(f, "ProbOfChange-to-tam1-or-tam2,%i\n", rand() % 34 + 33);
  fprintf(f, "recruit-natural-killers,%i\n", rand() % 34);
  fprintf(f, "ProbOfSAttackSuccesByNk,%i\n", rand() % 34 + 33);
  fprintf(f, "No-of-activating-tumor-cells-by-tan2,%i\n", rand() % 34 + 33);
  fprintf(f, "No-of-activating-tumor-cells-by-tam2,%i\n", rand() % 34 + 33);
  fprintf(f, "max-tumors,5000\n");
  fprintf(f, "No.ticks,%d\n", NO_TICKS);
  fprintf(f, "max-age-tam1,10\n");
  fprintf(f, "max-age-tam2,10\n");
  fprintf(f, "max-age-tan1,10\n");
  fprintf(f, "max-age-tan2,10\n");
  fprintf(f, "max-age-nk,10\n");
  fprintf(f, "No.-of-initial-treg-cells,%i\n", rand() % 34);
  fprintf(f, "No.-of-initial-helper-cells,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOfInterac-Th-Tum,%i\n", rand() % 34);
  fprintf(f, "ProbOfChange-thcells-to-thcells-,%i\n", rand() % 34);
  fprintf(f, "ProbOfAttackSuccesByCd8,%i\n", rand() % 34 + 33);
}

void gen_weak_strong() {
  fprintf(f, "No.-of-initial-tumor-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "No.-of-initial-neutrophils-cell,%i\n", rand() % 34);
  fprintf(f, "No.-of-initial-macrophages-cells,%i\n", rand() % 34);
  fprintf(f, "No.-of-initial-natural-killers-cells,%i\n", rand() % 34);
  fprintf(f, "recruit-neutrophils,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOfInterac-NeutTum,%i\n", rand() % 34);
  fprintf(f, "ProbOfChange-to-tan1-or-tan2,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOf-tan1,%i\n", rand() % 34);
  fprintf(f, "No-of-desactivating-tumor-cells-by-tan1,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOf-tam1,%i\n", rand() % 34);
  fprintf(f, "recruit-macrophages,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOfInterac-MacrTum,%i\n", rand() % 34);
  fprintf(f, "ProbOfChange-to-tam1-or-tam2,%i\n", rand() % 35 + 66);
  fprintf(f, "recruit-natural-killers,%i\n", rand() % 34);
  fprintf(f, "ProbOfSAttackSuccesByNk,%i\n", rand() % 35 + 66);
  fprintf(f, "No-of-activating-tumor-cells-by-tan2,%i\n", rand() % 35 + 66);
  fprintf(f, "No-of-activating-tumor-cells-by-tam2,%i\n", rand() % 35 + 66);
  fprintf(f, "max-tumors,5000\n");
  fprintf(f, "No.ticks,%d\n", NO_TICKS);
  fprintf(f, "max-age-tam1,10\n");
  fprintf(f, "max-age-tam2,10\n");
  fprintf(f, "max-age-tan1,10\n");
  fprintf(f, "max-age-tan2,10\n");
  fprintf(f, "max-age-nk,10\n");
  fprintf(f, "No.-of-initial-treg-cells,%i\n", rand() % 34);
  fprintf(f, "No.-of-initial-helper-cells,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOfInterac-Th-Tum,%i\n", rand() % 34);
  fprintf(f, "ProbOfChange-thcells-to-thcells-,%i\n", rand() % 34);
  fprintf(f, "ProbOfAttackSuccesByCd8,%i\n", rand() % 35 + 66);
}

void gen_medium_weak() {
  fprintf(f, "No.-of-initial-tumor-cells,%i\n", rand() % 34);
  fprintf(f, "No.-of-initial-neutrophils-cell,%i\n", rand() % 34 + 33);
  fprintf(f, "No.-of-initial-macrophages-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "No.-of-initial-natural-killers-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "recruit-neutrophils,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOfInterac-NeutTum,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfChange-to-tan1-or-tan2,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOf-tan1,%i\n", rand() % 34 + 33);
  fprintf(f, "No-of-desactivating-tumor-cells-by-tan1,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOf-tam1,%i\n", rand() % 34 + 33);
  fprintf(f, "recruit-macrophages,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOfInterac-MacrTum,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfChange-to-tam1-or-tam2,%i\n", rand() % 34);
  fprintf(f, "recruit-natural-killers,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSAttackSuccesByNk,%i\n", rand() % 34);
  fprintf(f, "No-of-activating-tumor-cells-by-tan2,%i\n", rand() % 34);
  fprintf(f, "No-of-activating-tumor-cells-by-tam2,%i\n", rand() % 34);
  fprintf(f, "max-tumors,5000\n");
  fprintf(f, "No.ticks,%d\n", NO_TICKS);
  fprintf(f, "max-age-tam1,10\n");
  fprintf(f, "max-age-tam2,10\n");
  fprintf(f, "max-age-tan1,10\n");
  fprintf(f, "max-age-tan2,10\n");
  fprintf(f, "max-age-nk,10\n");
  fprintf(f, "No.-of-initial-treg-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "No.-of-initial-helper-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOfInterac-Th-Tum,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfChange-thcells-to-thcells-,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfAttackSuccesByCd8,%i\n", rand() % 34);
}

void gen_medium_medium() {
  fprintf(f, "No.-of-initial-tumor-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "No.-of-initial-neutrophils-cell,%i\n", rand() % 34 + 33);
  fprintf(f, "No.-of-initial-macrophages-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "No.-of-initial-natural-killers-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "recruit-neutrophils,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOfInterac-NeutTum,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfChange-to-tan1-or-tan2,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOf-tan1,%i\n", rand() % 34 + 33);
  fprintf(f, "No-of-desactivating-tumor-cells-by-tan1,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOf-tam1,%i\n", rand() % 34 + 33);
  fprintf(f, "recruit-macrophages,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOfInterac-MacrTum,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfChange-to-tam1-or-tam2,%i\n", rand() % 34 + 33);
  fprintf(f, "recruit-natural-killers,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSAttackSuccesByNk,%i\n", rand() % 34 + 33);
  fprintf(f, "No-of-activating-tumor-cells-by-tan2,%i\n", rand() % 34 + 33);
  fprintf(f, "No-of-activating-tumor-cells-by-tam2,%i\n", rand() % 34 + 33);
  fprintf(f, "max-tumors,5000\n");
  fprintf(f, "No.ticks,%d\n", NO_TICKS);
  fprintf(f, "max-age-tam1,10\n");
  fprintf(f, "max-age-tam2,10\n");
  fprintf(f, "max-age-tan1,10\n");
  fprintf(f, "max-age-tan2,10\n");
  fprintf(f, "max-age-nk,10\n");
  fprintf(f, "No.-of-initial-treg-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "No.-of-initial-helper-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOfInterac-Th-Tum,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfChange-thcells-to-thcells-,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfAttackSuccesByCd8,%i\n", rand() % 34 + 33);
}

void gen_medium_strong() {
  fprintf(f, "No.-of-initial-tumor-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "No.-of-initial-neutrophils-cell,%i\n", rand() % 34 + 33);
  fprintf(f, "No.-of-initial-macrophages-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "No.-of-initial-natural-killers-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "recruit-neutrophils,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOfInterac-NeutTum,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfChange-to-tan1-or-tan2,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOf-tan1,%i\n", rand() % 34 + 33);
  fprintf(f, "No-of-desactivating-tumor-cells-by-tan1,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOf-tam1,%i\n", rand() % 34 + 33);
  fprintf(f, "recruit-macrophages,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOfInterac-MacrTum,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfChange-to-tam1-or-tam2,%i\n", rand() % 35 + 66);
  fprintf(f, "recruit-natural-killers,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSAttackSuccesByNk,%i\n", rand() % 35 + 66);
  fprintf(f, "No-of-activating-tumor-cells-by-tan2,%i\n", rand() % 35 + 66);
  fprintf(f, "No-of-activating-tumor-cells-by-tam2,%i\n", rand() % 35 + 66);
  fprintf(f, "max-tumors,5000\n");
  fprintf(f, "No.ticks,%d\n", NO_TICKS);
  fprintf(f, "max-age-tam1,10\n");
  fprintf(f, "max-age-tam2,10\n");
  fprintf(f, "max-age-tan1,10\n");
  fprintf(f, "max-age-tan2,10\n");
  fprintf(f, "max-age-nk,10\n");
  fprintf(f, "No.-of-initial-treg-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "No.-of-initial-helper-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOfInterac-Th-Tum,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfChange-thcells-to-thcells-,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfAttackSuccesByCd8,%i\n", rand() % 35 + 66);
}

void gen_strong_weak() {
  fprintf(f, "No.-of-initial-tumor-cells,%i\n", rand() % 34);
  fprintf(f, "No.-of-initial-neutrophils-cell,%i\n", rand() % 35 + 66);
  fprintf(f, "No.-of-initial-macrophages-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "No.-of-initial-natural-killers-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "recruit-neutrophils,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOfInterac-NeutTum,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfChange-to-tan1-or-tan2,%i\n", rand() % 34);
  fprintf(f, "ProbOfSuccesOf-tan1,%i\n", rand() % 35 + 66);
  fprintf(f, "No-of-desactivating-tumor-cells-by-tan1,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOf-tam1,%i\n", rand() % 35 + 66);
  fprintf(f, "recruit-macrophages,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOfInterac-MacrTum,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfChange-to-tam1-or-tam2,%i\n", rand() % 34);
  fprintf(f, "recruit-natural-killers,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSAttackSuccesByNk,%i\n", rand() % 34);
  fprintf(f, "No-of-activating-tumor-cells-by-tan2,%i\n", rand() % 34);
  fprintf(f, "No-of-activating-tumor-cells-by-tam2,%i\n", rand() % 34);
  fprintf(f, "max-tumors,5000\n");
  fprintf(f, "No.ticks,%d\n", NO_TICKS);
  fprintf(f, "max-age-tam1,10\n");
  fprintf(f, "max-age-tam2,10\n");
  fprintf(f, "max-age-tan1,10\n");
  fprintf(f, "max-age-tan2,10\n");
  fprintf(f, "max-age-nk,10\n");
  fprintf(f, "No.-of-initial-treg-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "No.-of-initial-helper-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOfInterac-Th-Tum,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfChange-thcells-to-thcells-,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfAttackSuccesByCd8,%i\n", rand() % 34);
}

void gen_strong_medium() {
  fprintf(f, "No.-of-initial-tumor-cells,%i\n", rand() % 34 + 33);
  fprintf(f, "No.-of-initial-neutrophils-cell,%i\n", rand() % 35 + 66);
  fprintf(f, "No.-of-initial-macrophages-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "No.-of-initial-natural-killers-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "recruit-neutrophils,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOfInterac-NeutTum,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfChange-to-tan1-or-tan2,%i\n", rand() % 34 + 33);
  fprintf(f, "ProbOfSuccesOf-tan1,%i\n", rand() % 35 + 66);
  fprintf(f, "No-of-desactivating-tumor-cells-by-tan1,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOf-tam1,%i\n", rand() % 35 + 66);
  fprintf(f, "recruit-macrophages,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOfInterac-MacrTum,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfChange-to-tam1-or-tam2,%i\n", rand() % 34 + 33);
  fprintf(f, "recruit-natural-killers,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSAttackSuccesByNk,%i\n", rand() % 34 + 33);
  fprintf(f, "No-of-activating-tumor-cells-by-tan2,%i\n", rand() % 34 + 33);
  fprintf(f, "No-of-activating-tumor-cells-by-tam2,%i\n", rand() % 34 + 33);
  fprintf(f, "max-tumors,5000\n");
  fprintf(f, "No.ticks,%d\n", NO_TICKS);
  fprintf(f, "max-age-tam1,10\n");
  fprintf(f, "max-age-tam2,10\n");
  fprintf(f, "max-age-tan1,10\n");
  fprintf(f, "max-age-tan2,10\n");
  fprintf(f, "max-age-nk,10\n");
  fprintf(f, "No.-of-initial-treg-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "No.-of-initial-helper-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOfInterac-Th-Tum,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfChange-thcells-to-thcells-,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfAttackSuccesByCd8,%i\n", rand() % 34 + 33);
}

void gen_strong_strong() {
  fprintf(f, "No.-of-initial-tumor-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "No.-of-initial-neutrophils-cell,%i\n", rand() % 35 + 66);
  fprintf(f, "No.-of-initial-macrophages-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "No.-of-initial-natural-killers-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "recruit-neutrophils,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOfInterac-NeutTum,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfChange-to-tan1-or-tan2,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOf-tan1,%i\n", rand() % 35 + 66);
  fprintf(f, "No-of-desactivating-tumor-cells-by-tan1,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOf-tam1,%i\n", rand() % 35 + 66);
  fprintf(f, "recruit-macrophages,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOfInterac-MacrTum,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfChange-to-tam1-or-tam2,%i\n", rand() % 35 + 66);
  fprintf(f, "recruit-natural-killers,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSAttackSuccesByNk,%i\n", rand() % 35 + 66);
  fprintf(f, "No-of-activating-tumor-cells-by-tan2,%i\n", rand() % 35 + 66);
  fprintf(f, "No-of-activating-tumor-cells-by-tam2,%i\n", rand() % 35 + 66);
  fprintf(f, "max-tumors,5000\n");
  fprintf(f, "No.ticks,%d\n", NO_TICKS);
  fprintf(f, "max-age-tam1,10\n");
  fprintf(f, "max-age-tam2,10\n");
  fprintf(f, "max-age-tan1,10\n");
  fprintf(f, "max-age-tan2,10\n");
  fprintf(f, "max-age-nk,10\n");
  fprintf(f, "No.-of-initial-treg-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "No.-of-initial-helper-cells,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfSuccesOfInterac-Th-Tum,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfChange-thcells-to-thcells-,%i\n", rand() % 35 + 66);
  fprintf(f, "ProbOfAttackSuccesByCd8,%i\n", rand() % 35 + 66);
}

void gen_data_by_combination(level_t si_level, level_t cancer_level) {
  char folder[100], filename[100];

  sprintf(folder, "%s-%s", levels[si_level], levels[cancer_level]);
  mkdir(folder, 0755);

  for (size_t i = 1; i <= TOTAL_FILES; i++) {
    sprintf(filename, "%s/input_values%d.csv", folder, i);
    f = fopen(filename, "w");

    if (f == NULL) {
      fprintf(stderr, "Error en la creacioin del archivo %s.\n", filename);
      break;
    } else {
      if (si_level == WEAK && cancer_level == WEAK) {
        gen_weak_weak();
      } else if (si_level == WEAK && cancer_level == MEDIUM) {
        gen_weak_medium();
      } else if (si_level == WEAK && cancer_level == STRONG) {
        gen_weak_strong();
      } else if (si_level == MEDIUM && cancer_level == WEAK) {
        gen_medium_weak();
      } else if (si_level == MEDIUM && cancer_level == MEDIUM) {
        gen_medium_medium();
      } else if (si_level == MEDIUM && cancer_level == STRONG) {
        gen_medium_strong();
      } else if (si_level == STRONG && cancer_level == WEAK) {
        gen_strong_weak();
      } else if (si_level == STRONG && cancer_level == MEDIUM) {
        gen_strong_medium();
      } else if (si_level == STRONG && cancer_level == STRONG) {
        gen_strong_strong();
      } else {
        fprintf(stderr, "Error: Combinacion desconocida.\n");
      }
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
