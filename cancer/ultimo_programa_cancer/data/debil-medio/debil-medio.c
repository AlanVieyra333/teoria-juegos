#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( ) {
	
 srand( time( NULL ) );

	FILE * Q1 = fopen("input_values1.csv","w");
	if(Q1==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q1,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q1,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q1,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q1,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q1,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q1,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q1,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q1,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q1,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q1,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q1,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q1,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q1,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q1,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q1,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q1,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q1,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q1,"max-tumors,5000\n");
		fprintf(Q1,"No.ticks,11\n");
		fprintf(Q1,"max-age-tam1,10\n");
		fprintf(Q1,"max-age-tam2,10\n");
		fprintf(Q1,"max-age-tan1,10\n");
		fprintf(Q1,"max-age-tan2,10\n");
		fprintf(Q1,"max-age-nk,10\n");
		fprintf(Q1,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q1,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q1,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q1,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q1,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q1);
	
 

	FILE * Q2 = fopen("input_values2.csv","w");
	if(Q2==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q2,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q2,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q2,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q2,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q2,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q2,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q2,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q2,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q2,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q2,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q2,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q2,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q2,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q2,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q2,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q2,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q2,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q2,"max-tumors,5000\n");
		fprintf(Q2,"No.ticks,11\n");
		fprintf(Q2,"max-age-tam1,10\n");
		fprintf(Q2,"max-age-tam2,10\n");
		fprintf(Q2,"max-age-tan1,10\n");
		fprintf(Q2,"max-age-tan2,10\n");
		fprintf(Q2,"max-age-nk,10\n");
		fprintf(Q2,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q2,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q2,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q2,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q2,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q2);
	
 

	FILE * Q3 = fopen("input_values3.csv","w");
	if(Q3==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q3,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q3,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q3,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q3,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q3,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q3,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q3,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q3,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q3,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q3,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q3,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q3,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q3,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q3,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q3,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q3,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q3,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q3,"max-tumors,5000\n");
		fprintf(Q3,"No.ticks,11\n");
		fprintf(Q3,"max-age-tam1,10\n");
		fprintf(Q3,"max-age-tam2,10\n");
		fprintf(Q3,"max-age-tan1,10\n");
		fprintf(Q3,"max-age-tan2,10\n");
		fprintf(Q3,"max-age-nk,10\n");
		fprintf(Q3,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q3,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q3,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q3,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q3,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q3);
	
 

	FILE * Q4 = fopen("input_values4.csv","w");
	if(Q4==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q4,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q4,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q4,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q4,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q4,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q4,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q4,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q4,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q4,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q4,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q4,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q4,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q4,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q4,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q4,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q4,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q4,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q4,"max-tumors,5000\n");
		fprintf(Q4,"No.ticks,11\n");
		fprintf(Q4,"max-age-tam1,10\n");
		fprintf(Q4,"max-age-tam2,10\n");
		fprintf(Q4,"max-age-tan1,10\n");
		fprintf(Q4,"max-age-tan2,10\n");
		fprintf(Q4,"max-age-nk,10\n");
		fprintf(Q4,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q4,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q4,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q4,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q4,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q4);
	
 

	FILE * Q5 = fopen("input_values5.csv","w");
	if(Q5==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q5,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q5,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q5,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q5,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q5,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q5,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q5,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q5,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q5,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q5,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q5,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q5,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q5,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q5,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q5,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q5,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q5,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q5,"max-tumors,5000\n");
		fprintf(Q5,"No.ticks,11\n");
		fprintf(Q5,"max-age-tam1,10\n");
		fprintf(Q5,"max-age-tam2,10\n");
		fprintf(Q5,"max-age-tan1,10\n");
		fprintf(Q5,"max-age-tan2,10\n");
		fprintf(Q5,"max-age-nk,10\n");
		fprintf(Q5,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q5,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q5,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q5,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q5,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q5);
	
 

	FILE * Q6 = fopen("input_values6.csv","w");
	if(Q6==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q6,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q6,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q6,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q6,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q6,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q6,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q6,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q6,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q6,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q6,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q6,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q6,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q6,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q6,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q6,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q6,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q6,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q6,"max-tumors,5000\n");
		fprintf(Q6,"No.ticks,11\n");
		fprintf(Q6,"max-age-tam1,10\n");
		fprintf(Q6,"max-age-tam2,10\n");
		fprintf(Q6,"max-age-tan1,10\n");
		fprintf(Q6,"max-age-tan2,10\n");
		fprintf(Q6,"max-age-nk,10\n");
		fprintf(Q6,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q6,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q6,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q6,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q6,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q6);
	
 

	FILE * Q7 = fopen("input_values7.csv","w");
	if(Q7==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q7,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q7,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q7,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q7,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q7,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q7,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q7,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q7,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q7,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q7,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q7,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q7,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q7,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q7,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q7,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q7,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q7,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q7,"max-tumors,5000\n");
		fprintf(Q7,"No.ticks,11\n");
		fprintf(Q7,"max-age-tam1,10\n");
		fprintf(Q7,"max-age-tam2,10\n");
		fprintf(Q7,"max-age-tan1,10\n");
		fprintf(Q7,"max-age-tan2,10\n");
		fprintf(Q7,"max-age-nk,10\n");
		fprintf(Q7,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q7,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q7,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q7,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q7,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q7);
	
 

	FILE * Q8 = fopen("input_values8.csv","w");
	if(Q8==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q8,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q8,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q8,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q8,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q8,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q8,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q8,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q8,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q8,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q8,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q8,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q8,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q8,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q8,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q8,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q8,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q8,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q8,"max-tumors,5000\n");
		fprintf(Q8,"No.ticks,11\n");
		fprintf(Q8,"max-age-tam1,10\n");
		fprintf(Q8,"max-age-tam2,10\n");
		fprintf(Q8,"max-age-tan1,10\n");
		fprintf(Q8,"max-age-tan2,10\n");
		fprintf(Q8,"max-age-nk,10\n");
		fprintf(Q8,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q8,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q8,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q8,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q8,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q8);
	
 

	FILE * Q9 = fopen("input_values9.csv","w");
	if(Q9==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q9,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q9,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q9,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q9,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q9,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q9,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q9,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q9,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q9,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q9,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q9,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q9,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q9,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q9,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q9,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q9,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q9,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q9,"max-tumors,5000\n");
		fprintf(Q9,"No.ticks,11\n");
		fprintf(Q9,"max-age-tam1,10\n");
		fprintf(Q9,"max-age-tam2,10\n");
		fprintf(Q9,"max-age-tan1,10\n");
		fprintf(Q9,"max-age-tan2,10\n");
		fprintf(Q9,"max-age-nk,10\n");
		fprintf(Q9,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q9,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q9,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q9,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q9,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q9);
	
 

	FILE * Q10 = fopen("input_values10.csv","w");
	if(Q10==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q10,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q10,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q10,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q10,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q10,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q10,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q10,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q10,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q10,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q10,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q10,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q10,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q10,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q10,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q10,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q10,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q10,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q10,"max-tumors,5000\n");
		fprintf(Q10,"No.ticks,11\n");
		fprintf(Q10,"max-age-tam1,10\n");
		fprintf(Q10,"max-age-tam2,10\n");
		fprintf(Q10,"max-age-tan1,10\n");
		fprintf(Q10,"max-age-tan2,10\n");
		fprintf(Q10,"max-age-nk,10\n");
		fprintf(Q10,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q10,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q10,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q10,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q10,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q10);
	
 

	FILE * Q11 = fopen("input_values11.csv","w");
	if(Q11==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q11,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q11,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q11,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q11,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q11,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q11,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q11,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q11,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q11,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q11,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q11,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q11,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q11,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q11,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q11,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q11,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q11,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q11,"max-tumors,5000\n");
		fprintf(Q11,"No.ticks,11\n");
		fprintf(Q11,"max-age-tam1,10\n");
		fprintf(Q11,"max-age-tam2,10\n");
		fprintf(Q11,"max-age-tan1,10\n");
		fprintf(Q11,"max-age-tan2,10\n");
		fprintf(Q11,"max-age-nk,10\n");
		fprintf(Q11,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q11,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q11,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q11,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q11,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q11);
	
 

	FILE * Q12 = fopen("input_values12.csv","w");
	if(Q12==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q12,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q12,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q12,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q12,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q12,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q12,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q12,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q12,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q12,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q12,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q12,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q12,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q12,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q12,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q12,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q12,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q12,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q12,"max-tumors,5000\n");
		fprintf(Q12,"No.ticks,11\n");
		fprintf(Q12,"max-age-tam1,10\n");
		fprintf(Q12,"max-age-tam2,10\n");
		fprintf(Q12,"max-age-tan1,10\n");
		fprintf(Q12,"max-age-tan2,10\n");
		fprintf(Q12,"max-age-nk,10\n");
		fprintf(Q12,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q12,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q12,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q12,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q12,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q12);
	
 

	FILE * Q13 = fopen("input_values13.csv","w");
	if(Q13==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q13,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q13,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q13,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q13,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q13,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q13,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q13,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q13,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q13,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q13,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q13,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q13,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q13,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q13,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q13,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q13,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q13,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q13,"max-tumors,5000\n");
		fprintf(Q13,"No.ticks,11\n");
		fprintf(Q13,"max-age-tam1,10\n");
		fprintf(Q13,"max-age-tam2,10\n");
		fprintf(Q13,"max-age-tan1,10\n");
		fprintf(Q13,"max-age-tan2,10\n");
		fprintf(Q13,"max-age-nk,10\n");
		fprintf(Q13,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q13,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q13,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q13,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q13,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q13);
	
 

	FILE * Q14 = fopen("input_values14.csv","w");
	if(Q14==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q14,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q14,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q14,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q14,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q14,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q14,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q14,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q14,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q14,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q14,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q14,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q14,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q14,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q14,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q14,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q14,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q14,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q14,"max-tumors,5000\n");
		fprintf(Q14,"No.ticks,11\n");
		fprintf(Q14,"max-age-tam1,10\n");
		fprintf(Q14,"max-age-tam2,10\n");
		fprintf(Q14,"max-age-tan1,10\n");
		fprintf(Q14,"max-age-tan2,10\n");
		fprintf(Q14,"max-age-nk,10\n");
		fprintf(Q14,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q14,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q14,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q14,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q14,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q14);
	
 

	FILE * Q15 = fopen("input_values15.csv","w");
	if(Q15==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q15,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q15,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q15,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q15,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q15,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q15,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q15,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q15,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q15,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q15,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q15,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q15,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q15,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q15,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q15,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q15,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q15,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q15,"max-tumors,5000\n");
		fprintf(Q15,"No.ticks,11\n");
		fprintf(Q15,"max-age-tam1,10\n");
		fprintf(Q15,"max-age-tam2,10\n");
		fprintf(Q15,"max-age-tan1,10\n");
		fprintf(Q15,"max-age-tan2,10\n");
		fprintf(Q15,"max-age-nk,10\n");
		fprintf(Q15,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q15,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q15,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q15,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q15,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q15);
	
 

	FILE * Q16 = fopen("input_values16.csv","w");
	if(Q16==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q16,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q16,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q16,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q16,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q16,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q16,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q16,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q16,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q16,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q16,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q16,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q16,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q16,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q16,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q16,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q16,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q16,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q16,"max-tumors,5000\n");
		fprintf(Q16,"No.ticks,11\n");
		fprintf(Q16,"max-age-tam1,10\n");
		fprintf(Q16,"max-age-tam2,10\n");
		fprintf(Q16,"max-age-tan1,10\n");
		fprintf(Q16,"max-age-tan2,10\n");
		fprintf(Q16,"max-age-nk,10\n");
		fprintf(Q16,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q16,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q16,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q16,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q16,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q16);
	
 

	FILE * Q17 = fopen("input_values17.csv","w");
	if(Q17==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q17,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q17,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q17,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q17,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q17,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q17,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q17,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q17,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q17,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q17,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q17,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q17,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q17,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q17,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q17,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q17,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q17,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q17,"max-tumors,5000\n");
		fprintf(Q17,"No.ticks,11\n");
		fprintf(Q17,"max-age-tam1,10\n");
		fprintf(Q17,"max-age-tam2,10\n");
		fprintf(Q17,"max-age-tan1,10\n");
		fprintf(Q17,"max-age-tan2,10\n");
		fprintf(Q17,"max-age-nk,10\n");
		fprintf(Q17,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q17,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q17,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q17,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q17,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q17);
	
 

	FILE * Q18 = fopen("input_values18.csv","w");
	if(Q18==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q18,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q18,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q18,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q18,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q18,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q18,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q18,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q18,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q18,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q18,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q18,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q18,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q18,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q18,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q18,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q18,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q18,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q18,"max-tumors,5000\n");
		fprintf(Q18,"No.ticks,11\n");
		fprintf(Q18,"max-age-tam1,10\n");
		fprintf(Q18,"max-age-tam2,10\n");
		fprintf(Q18,"max-age-tan1,10\n");
		fprintf(Q18,"max-age-tan2,10\n");
		fprintf(Q18,"max-age-nk,10\n");
		fprintf(Q18,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q18,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q18,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q18,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q18,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q18);
	
 

	FILE * Q19 = fopen("input_values19.csv","w");
	if(Q19==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q19,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q19,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q19,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q19,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q19,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q19,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q19,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q19,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q19,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q19,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q19,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q19,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q19,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q19,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q19,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q19,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q19,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q19,"max-tumors,5000\n");
		fprintf(Q19,"No.ticks,11\n");
		fprintf(Q19,"max-age-tam1,10\n");
		fprintf(Q19,"max-age-tam2,10\n");
		fprintf(Q19,"max-age-tan1,10\n");
		fprintf(Q19,"max-age-tan2,10\n");
		fprintf(Q19,"max-age-nk,10\n");
		fprintf(Q19,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q19,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q19,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q19,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q19,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q19);
	
 

	FILE * Q20 = fopen("input_values20.csv","w");
	if(Q20==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q20,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q20,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q20,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q20,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q20,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q20,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q20,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q20,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q20,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q20,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q20,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q20,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q20,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q20,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q20,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q20,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q20,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q20,"max-tumors,5000\n");
		fprintf(Q20,"No.ticks,11\n");
		fprintf(Q20,"max-age-tam1,10\n");
		fprintf(Q20,"max-age-tam2,10\n");
		fprintf(Q20,"max-age-tan1,10\n");
		fprintf(Q20,"max-age-tan2,10\n");
		fprintf(Q20,"max-age-nk,10\n");
		fprintf(Q20,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q20,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q20,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q20,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q20,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q20);
	
 

	FILE * Q21 = fopen("input_values21.csv","w");
	if(Q21==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q21,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q21,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q21,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q21,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q21,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q21,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q21,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q21,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q21,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q21,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q21,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q21,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q21,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q21,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q21,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q21,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q21,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q21,"max-tumors,5000\n");
		fprintf(Q21,"No.ticks,11\n");
		fprintf(Q21,"max-age-tam1,10\n");
		fprintf(Q21,"max-age-tam2,10\n");
		fprintf(Q21,"max-age-tan1,10\n");
		fprintf(Q21,"max-age-tan2,10\n");
		fprintf(Q21,"max-age-nk,10\n");
		fprintf(Q21,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q21,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q21,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q21,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q21,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q21);
	
 

	FILE * Q22 = fopen("input_values22.csv","w");
	if(Q22==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q22,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q22,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q22,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q22,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q22,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q22,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q22,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q22,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q22,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q22,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q22,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q22,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q22,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q22,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q22,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q22,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q22,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q22,"max-tumors,5000\n");
		fprintf(Q22,"No.ticks,11\n");
		fprintf(Q22,"max-age-tam1,10\n");
		fprintf(Q22,"max-age-tam2,10\n");
		fprintf(Q22,"max-age-tan1,10\n");
		fprintf(Q22,"max-age-tan2,10\n");
		fprintf(Q22,"max-age-nk,10\n");
		fprintf(Q22,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q22,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q22,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q22,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q22,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q22);
	
 

	FILE * Q23 = fopen("input_values23.csv","w");
	if(Q23==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q23,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q23,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q23,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q23,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q23,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q23,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q23,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q23,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q23,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q23,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q23,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q23,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q23,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q23,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q23,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q23,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q23,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q23,"max-tumors,5000\n");
		fprintf(Q23,"No.ticks,11\n");
		fprintf(Q23,"max-age-tam1,10\n");
		fprintf(Q23,"max-age-tam2,10\n");
		fprintf(Q23,"max-age-tan1,10\n");
		fprintf(Q23,"max-age-tan2,10\n");
		fprintf(Q23,"max-age-nk,10\n");
		fprintf(Q23,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q23,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q23,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q23,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q23,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q23);
	
 

	FILE * Q24 = fopen("input_values24.csv","w");
	if(Q24==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q24,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q24,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q24,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q24,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q24,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q24,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q24,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q24,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q24,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q24,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q24,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q24,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q24,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q24,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q24,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q24,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q24,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q24,"max-tumors,5000\n");
		fprintf(Q24,"No.ticks,11\n");
		fprintf(Q24,"max-age-tam1,10\n");
		fprintf(Q24,"max-age-tam2,10\n");
		fprintf(Q24,"max-age-tan1,10\n");
		fprintf(Q24,"max-age-tan2,10\n");
		fprintf(Q24,"max-age-nk,10\n");
		fprintf(Q24,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q24,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q24,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q24,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q24,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q24);
	
 

	FILE * Q25 = fopen("input_values25.csv","w");
	if(Q25==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q25,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q25,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q25,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q25,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q25,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q25,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q25,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q25,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q25,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q25,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q25,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q25,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q25,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q25,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q25,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q25,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q25,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q25,"max-tumors,5000\n");
		fprintf(Q25,"No.ticks,11\n");
		fprintf(Q25,"max-age-tam1,10\n");
		fprintf(Q25,"max-age-tam2,10\n");
		fprintf(Q25,"max-age-tan1,10\n");
		fprintf(Q25,"max-age-tan2,10\n");
		fprintf(Q25,"max-age-nk,10\n");
		fprintf(Q25,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q25,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q25,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q25,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q25,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q25);
	
 

	FILE * Q26 = fopen("input_values26.csv","w");
	if(Q26==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q26,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q26,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q26,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q26,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q26,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q26,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q26,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q26,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q26,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q26,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q26,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q26,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q26,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q26,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q26,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q26,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q26,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q26,"max-tumors,5000\n");
		fprintf(Q26,"No.ticks,11\n");
		fprintf(Q26,"max-age-tam1,10\n");
		fprintf(Q26,"max-age-tam2,10\n");
		fprintf(Q26,"max-age-tan1,10\n");
		fprintf(Q26,"max-age-tan2,10\n");
		fprintf(Q26,"max-age-nk,10\n");
		fprintf(Q26,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q26,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q26,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q26,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q26,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q26);
	
 

	FILE * Q27 = fopen("input_values27.csv","w");
	if(Q27==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q27,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q27,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q27,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q27,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q27,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q27,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q27,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q27,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q27,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q27,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q27,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q27,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q27,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q27,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q27,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q27,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q27,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q27,"max-tumors,5000\n");
		fprintf(Q27,"No.ticks,11\n");
		fprintf(Q27,"max-age-tam1,10\n");
		fprintf(Q27,"max-age-tam2,10\n");
		fprintf(Q27,"max-age-tan1,10\n");
		fprintf(Q27,"max-age-tan2,10\n");
		fprintf(Q27,"max-age-nk,10\n");
		fprintf(Q27,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q27,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q27,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q27,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q27,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q27);
	
 

	FILE * Q28 = fopen("input_values28.csv","w");
	if(Q28==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q28,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q28,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q28,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q28,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q28,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q28,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q28,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q28,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q28,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q28,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q28,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q28,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q28,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q28,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q28,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q28,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q28,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q28,"max-tumors,5000\n");
		fprintf(Q28,"No.ticks,11\n");
		fprintf(Q28,"max-age-tam1,10\n");
		fprintf(Q28,"max-age-tam2,10\n");
		fprintf(Q28,"max-age-tan1,10\n");
		fprintf(Q28,"max-age-tan2,10\n");
		fprintf(Q28,"max-age-nk,10\n");
		fprintf(Q28,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q28,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q28,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q28,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q28,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q28);
	
 

	FILE * Q29 = fopen("input_values29.csv","w");
	if(Q29==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q29,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q29,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q29,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q29,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q29,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q29,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q29,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q29,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q29,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q29,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q29,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q29,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q29,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q29,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q29,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q29,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q29,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q29,"max-tumors,5000\n");
		fprintf(Q29,"No.ticks,11\n");
		fprintf(Q29,"max-age-tam1,10\n");
		fprintf(Q29,"max-age-tam2,10\n");
		fprintf(Q29,"max-age-tan1,10\n");
		fprintf(Q29,"max-age-tan2,10\n");
		fprintf(Q29,"max-age-nk,10\n");
		fprintf(Q29,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q29,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q29,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q29,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q29,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q29);
	
 

	FILE * Q30 = fopen("input_values30.csv","w");
	if(Q30==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q30,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q30,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q30,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q30,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q30,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q30,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q30,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q30,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q30,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q30,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q30,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q30,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q30,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q30,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q30,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q30,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q30,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q30,"max-tumors,5000\n");
		fprintf(Q30,"No.ticks,11\n");
		fprintf(Q30,"max-age-tam1,10\n");
		fprintf(Q30,"max-age-tam2,10\n");
		fprintf(Q30,"max-age-tan1,10\n");
		fprintf(Q30,"max-age-tan2,10\n");
		fprintf(Q30,"max-age-nk,10\n");
		fprintf(Q30,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q30,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q30,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q30,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q30,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q30);
	
 

	FILE * Q31 = fopen("input_values31.csv","w");
	if(Q31==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q31,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q31,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q31,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q31,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q31,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q31,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q31,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q31,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q31,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q31,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q31,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q31,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q31,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q31,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q31,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q31,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q31,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q31,"max-tumors,5000\n");
		fprintf(Q31,"No.ticks,11\n");
		fprintf(Q31,"max-age-tam1,10\n");
		fprintf(Q31,"max-age-tam2,10\n");
		fprintf(Q31,"max-age-tan1,10\n");
		fprintf(Q31,"max-age-tan2,10\n");
		fprintf(Q31,"max-age-nk,10\n");
		fprintf(Q31,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q31,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q31,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q31,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q31,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q31);
	
 

	FILE * Q32 = fopen("input_values32.csv","w");
	if(Q32==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q32,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q32,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q32,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q32,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q32,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q32,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q32,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q32,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q32,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q32,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q32,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q32,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q32,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q32,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q32,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q32,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q32,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q32,"max-tumors,5000\n");
		fprintf(Q32,"No.ticks,11\n");
		fprintf(Q32,"max-age-tam1,10\n");
		fprintf(Q32,"max-age-tam2,10\n");
		fprintf(Q32,"max-age-tan1,10\n");
		fprintf(Q32,"max-age-tan2,10\n");
		fprintf(Q32,"max-age-nk,10\n");
		fprintf(Q32,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q32,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q32,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q32,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q32,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q32);
	
 

	FILE * Q33 = fopen("input_values33.csv","w");
	if(Q33==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q33,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q33,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q33,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q33,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q33,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q33,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q33,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q33,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q33,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q33,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q33,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q33,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q33,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q33,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q33,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q33,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q33,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q33,"max-tumors,5000\n");
		fprintf(Q33,"No.ticks,11\n");
		fprintf(Q33,"max-age-tam1,10\n");
		fprintf(Q33,"max-age-tam2,10\n");
		fprintf(Q33,"max-age-tan1,10\n");
		fprintf(Q33,"max-age-tan2,10\n");
		fprintf(Q33,"max-age-nk,10\n");
		fprintf(Q33,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q33,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q33,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q33,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q33,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q33);
	
 

	FILE * Q34 = fopen("input_values34.csv","w");
	if(Q34==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q34,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q34,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q34,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q34,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q34,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q34,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q34,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q34,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q34,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q34,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q34,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q34,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q34,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q34,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q34,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q34,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q34,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q34,"max-tumors,5000\n");
		fprintf(Q34,"No.ticks,11\n");
		fprintf(Q34,"max-age-tam1,10\n");
		fprintf(Q34,"max-age-tam2,10\n");
		fprintf(Q34,"max-age-tan1,10\n");
		fprintf(Q34,"max-age-tan2,10\n");
		fprintf(Q34,"max-age-nk,10\n");
		fprintf(Q34,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q34,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q34,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q34,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q34,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q34);
	
 

	FILE * Q35 = fopen("input_values35.csv","w");
	if(Q35==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q35,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q35,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q35,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q35,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q35,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q35,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q35,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q35,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q35,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q35,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q35,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q35,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q35,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q35,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q35,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q35,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q35,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q35,"max-tumors,5000\n");
		fprintf(Q35,"No.ticks,11\n");
		fprintf(Q35,"max-age-tam1,10\n");
		fprintf(Q35,"max-age-tam2,10\n");
		fprintf(Q35,"max-age-tan1,10\n");
		fprintf(Q35,"max-age-tan2,10\n");
		fprintf(Q35,"max-age-nk,10\n");
		fprintf(Q35,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q35,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q35,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q35,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q35,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q35);
	
 

	FILE * Q36 = fopen("input_values36.csv","w");
	if(Q36==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q36,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q36,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q36,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q36,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q36,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q36,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q36,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q36,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q36,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q36,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q36,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q36,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q36,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q36,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q36,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q36,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q36,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q36,"max-tumors,5000\n");
		fprintf(Q36,"No.ticks,11\n");
		fprintf(Q36,"max-age-tam1,10\n");
		fprintf(Q36,"max-age-tam2,10\n");
		fprintf(Q36,"max-age-tan1,10\n");
		fprintf(Q36,"max-age-tan2,10\n");
		fprintf(Q36,"max-age-nk,10\n");
		fprintf(Q36,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q36,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q36,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q36,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q36,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q36);
	
 

	FILE * Q37 = fopen("input_values37.csv","w");
	if(Q37==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q37,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q37,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q37,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q37,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q37,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q37,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q37,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q37,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q37,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q37,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q37,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q37,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q37,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q37,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q37,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q37,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q37,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q37,"max-tumors,5000\n");
		fprintf(Q37,"No.ticks,11\n");
		fprintf(Q37,"max-age-tam1,10\n");
		fprintf(Q37,"max-age-tam2,10\n");
		fprintf(Q37,"max-age-tan1,10\n");
		fprintf(Q37,"max-age-tan2,10\n");
		fprintf(Q37,"max-age-nk,10\n");
		fprintf(Q37,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q37,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q37,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q37,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q37,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q37);
	
 

	FILE * Q38 = fopen("input_values38.csv","w");
	if(Q38==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q38,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q38,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q38,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q38,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q38,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q38,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q38,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q38,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q38,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q38,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q38,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q38,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q38,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q38,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q38,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q38,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q38,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q38,"max-tumors,5000\n");
		fprintf(Q38,"No.ticks,11\n");
		fprintf(Q38,"max-age-tam1,10\n");
		fprintf(Q38,"max-age-tam2,10\n");
		fprintf(Q38,"max-age-tan1,10\n");
		fprintf(Q38,"max-age-tan2,10\n");
		fprintf(Q38,"max-age-nk,10\n");
		fprintf(Q38,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q38,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q38,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q38,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q38,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q38);
	
 

	FILE * Q39 = fopen("input_values39.csv","w");
	if(Q39==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q39,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q39,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q39,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q39,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q39,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q39,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q39,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q39,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q39,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q39,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q39,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q39,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q39,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q39,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q39,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q39,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q39,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q39,"max-tumors,5000\n");
		fprintf(Q39,"No.ticks,11\n");
		fprintf(Q39,"max-age-tam1,10\n");
		fprintf(Q39,"max-age-tam2,10\n");
		fprintf(Q39,"max-age-tan1,10\n");
		fprintf(Q39,"max-age-tan2,10\n");
		fprintf(Q39,"max-age-nk,10\n");
		fprintf(Q39,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q39,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q39,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q39,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q39,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q39);
	
 

	FILE * Q40 = fopen("input_values40.csv","w");
	if(Q40==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q40,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q40,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q40,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q40,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q40,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q40,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q40,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q40,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q40,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q40,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q40,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q40,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q40,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q40,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q40,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q40,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q40,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q40,"max-tumors,5000\n");
		fprintf(Q40,"No.ticks,11\n");
		fprintf(Q40,"max-age-tam1,10\n");
		fprintf(Q40,"max-age-tam2,10\n");
		fprintf(Q40,"max-age-tan1,10\n");
		fprintf(Q40,"max-age-tan2,10\n");
		fprintf(Q40,"max-age-nk,10\n");
		fprintf(Q40,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q40,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q40,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q40,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q40,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q40);
	
 

	FILE * Q41 = fopen("input_values41.csv","w");
	if(Q41==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q41,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q41,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q41,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q41,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q41,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q41,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q41,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q41,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q41,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q41,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q41,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q41,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q41,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q41,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q41,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q41,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q41,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q41,"max-tumors,5000\n");
		fprintf(Q41,"No.ticks,11\n");
		fprintf(Q41,"max-age-tam1,10\n");
		fprintf(Q41,"max-age-tam2,10\n");
		fprintf(Q41,"max-age-tan1,10\n");
		fprintf(Q41,"max-age-tan2,10\n");
		fprintf(Q41,"max-age-nk,10\n");
		fprintf(Q41,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q41,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q41,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q41,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q41,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q41);
	
 

	FILE * Q42 = fopen("input_values42.csv","w");
	if(Q42==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q42,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q42,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q42,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q42,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q42,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q42,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q42,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q42,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q42,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q42,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q42,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q42,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q42,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q42,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q42,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q42,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q42,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q42,"max-tumors,5000\n");
		fprintf(Q42,"No.ticks,11\n");
		fprintf(Q42,"max-age-tam1,10\n");
		fprintf(Q42,"max-age-tam2,10\n");
		fprintf(Q42,"max-age-tan1,10\n");
		fprintf(Q42,"max-age-tan2,10\n");
		fprintf(Q42,"max-age-nk,10\n");
		fprintf(Q42,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q42,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q42,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q42,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q42,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q42);
	
 

	FILE * Q43 = fopen("input_values43.csv","w");
	if(Q43==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q43,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q43,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q43,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q43,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q43,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q43,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q43,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q43,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q43,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q43,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q43,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q43,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q43,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q43,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q43,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q43,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q43,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q43,"max-tumors,5000\n");
		fprintf(Q43,"No.ticks,11\n");
		fprintf(Q43,"max-age-tam1,10\n");
		fprintf(Q43,"max-age-tam2,10\n");
		fprintf(Q43,"max-age-tan1,10\n");
		fprintf(Q43,"max-age-tan2,10\n");
		fprintf(Q43,"max-age-nk,10\n");
		fprintf(Q43,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q43,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q43,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q43,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q43,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q43);
	
 

	FILE * Q44 = fopen("input_values44.csv","w");
	if(Q44==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q44,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q44,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q44,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q44,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q44,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q44,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q44,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q44,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q44,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q44,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q44,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q44,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q44,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q44,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q44,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q44,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q44,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q44,"max-tumors,5000\n");
		fprintf(Q44,"No.ticks,11\n");
		fprintf(Q44,"max-age-tam1,10\n");
		fprintf(Q44,"max-age-tam2,10\n");
		fprintf(Q44,"max-age-tan1,10\n");
		fprintf(Q44,"max-age-tan2,10\n");
		fprintf(Q44,"max-age-nk,10\n");
		fprintf(Q44,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q44,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q44,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q44,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q44,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q44);
	
 

	FILE * Q45 = fopen("input_values45.csv","w");
	if(Q45==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q45,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q45,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q45,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q45,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q45,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q45,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q45,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q45,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q45,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q45,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q45,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q45,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q45,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q45,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q45,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q45,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q45,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q45,"max-tumors,5000\n");
		fprintf(Q45,"No.ticks,11\n");
		fprintf(Q45,"max-age-tam1,10\n");
		fprintf(Q45,"max-age-tam2,10\n");
		fprintf(Q45,"max-age-tan1,10\n");
		fprintf(Q45,"max-age-tan2,10\n");
		fprintf(Q45,"max-age-nk,10\n");
		fprintf(Q45,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q45,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q45,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q45,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q45,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q45);
	
 

	FILE * Q46 = fopen("input_values46.csv","w");
	if(Q46==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q46,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q46,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q46,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q46,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q46,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q46,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q46,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q46,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q46,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q46,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q46,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q46,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q46,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q46,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q46,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q46,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q46,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q46,"max-tumors,5000\n");
		fprintf(Q46,"No.ticks,11\n");
		fprintf(Q46,"max-age-tam1,10\n");
		fprintf(Q46,"max-age-tam2,10\n");
		fprintf(Q46,"max-age-tan1,10\n");
		fprintf(Q46,"max-age-tan2,10\n");
		fprintf(Q46,"max-age-nk,10\n");
		fprintf(Q46,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q46,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q46,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q46,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q46,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q46);
	
 

	FILE * Q47 = fopen("input_values47.csv","w");
	if(Q47==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q47,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q47,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q47,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q47,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q47,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q47,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q47,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q47,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q47,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q47,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q47,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q47,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q47,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q47,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q47,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q47,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q47,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q47,"max-tumors,5000\n");
		fprintf(Q47,"No.ticks,11\n");
		fprintf(Q47,"max-age-tam1,10\n");
		fprintf(Q47,"max-age-tam2,10\n");
		fprintf(Q47,"max-age-tan1,10\n");
		fprintf(Q47,"max-age-tan2,10\n");
		fprintf(Q47,"max-age-nk,10\n");
		fprintf(Q47,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q47,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q47,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q47,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q47,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q47);
	
 

	FILE * Q48 = fopen("input_values48.csv","w");
	if(Q48==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q48,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q48,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q48,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q48,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q48,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q48,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q48,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q48,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q48,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q48,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q48,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q48,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q48,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q48,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q48,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q48,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q48,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q48,"max-tumors,5000\n");
		fprintf(Q48,"No.ticks,11\n");
		fprintf(Q48,"max-age-tam1,10\n");
		fprintf(Q48,"max-age-tam2,10\n");
		fprintf(Q48,"max-age-tan1,10\n");
		fprintf(Q48,"max-age-tan2,10\n");
		fprintf(Q48,"max-age-nk,10\n");
		fprintf(Q48,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q48,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q48,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q48,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q48,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q48);
	
 

	FILE * Q49 = fopen("input_values49.csv","w");
	if(Q49==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q49,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q49,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q49,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q49,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q49,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q49,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q49,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q49,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q49,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q49,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q49,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q49,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q49,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q49,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q49,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q49,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q49,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q49,"max-tumors,5000\n");
		fprintf(Q49,"No.ticks,11\n");
		fprintf(Q49,"max-age-tam1,10\n");
		fprintf(Q49,"max-age-tam2,10\n");
		fprintf(Q49,"max-age-tan1,10\n");
		fprintf(Q49,"max-age-tan2,10\n");
		fprintf(Q49,"max-age-nk,10\n");
		fprintf(Q49,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q49,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q49,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q49,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q49,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q49);
	
 

	FILE * Q50 = fopen("input_values50.csv","w");
	if(Q50==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q50,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q50,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q50,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q50,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q50,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q50,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q50,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q50,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q50,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q50,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q50,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q50,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q50,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q50,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q50,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q50,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q50,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q50,"max-tumors,5000\n");
		fprintf(Q50,"No.ticks,11\n");
		fprintf(Q50,"max-age-tam1,10\n");
		fprintf(Q50,"max-age-tam2,10\n");
		fprintf(Q50,"max-age-tan1,10\n");
		fprintf(Q50,"max-age-tan2,10\n");
		fprintf(Q50,"max-age-nk,10\n");
		fprintf(Q50,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q50,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q50,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q50,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q50,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q50);
	
 

	FILE * Q51 = fopen("input_values51.csv","w");
	if(Q51==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q51,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q51,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q51,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q51,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q51,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q51,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q51,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q51,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q51,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q51,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q51,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q51,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q51,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q51,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q51,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q51,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q51,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q51,"max-tumors,5000\n");
		fprintf(Q51,"No.ticks,11\n");
		fprintf(Q51,"max-age-tam1,10\n");
		fprintf(Q51,"max-age-tam2,10\n");
		fprintf(Q51,"max-age-tan1,10\n");
		fprintf(Q51,"max-age-tan2,10\n");
		fprintf(Q51,"max-age-nk,10\n");
		fprintf(Q51,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q51,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q51,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q51,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q51,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q51);
	
 

	FILE * Q52 = fopen("input_values52.csv","w");
	if(Q52==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q52,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q52,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q52,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q52,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q52,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q52,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q52,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q52,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q52,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q52,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q52,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q52,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q52,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q52,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q52,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q52,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q52,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q52,"max-tumors,5000\n");
		fprintf(Q52,"No.ticks,11\n");
		fprintf(Q52,"max-age-tam1,10\n");
		fprintf(Q52,"max-age-tam2,10\n");
		fprintf(Q52,"max-age-tan1,10\n");
		fprintf(Q52,"max-age-tan2,10\n");
		fprintf(Q52,"max-age-nk,10\n");
		fprintf(Q52,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q52,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q52,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q52,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q52,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q52);
	
 

	FILE * Q53 = fopen("input_values53.csv","w");
	if(Q53==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q53,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q53,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q53,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q53,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q53,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q53,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q53,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q53,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q53,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q53,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q53,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q53,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q53,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q53,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q53,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q53,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q53,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q53,"max-tumors,5000\n");
		fprintf(Q53,"No.ticks,11\n");
		fprintf(Q53,"max-age-tam1,10\n");
		fprintf(Q53,"max-age-tam2,10\n");
		fprintf(Q53,"max-age-tan1,10\n");
		fprintf(Q53,"max-age-tan2,10\n");
		fprintf(Q53,"max-age-nk,10\n");
		fprintf(Q53,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q53,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q53,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q53,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q53,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q53);
	
 

	FILE * Q54 = fopen("input_values54.csv","w");
	if(Q54==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q54,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q54,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q54,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q54,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q54,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q54,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q54,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q54,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q54,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q54,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q54,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q54,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q54,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q54,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q54,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q54,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q54,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q54,"max-tumors,5000\n");
		fprintf(Q54,"No.ticks,11\n");
		fprintf(Q54,"max-age-tam1,10\n");
		fprintf(Q54,"max-age-tam2,10\n");
		fprintf(Q54,"max-age-tan1,10\n");
		fprintf(Q54,"max-age-tan2,10\n");
		fprintf(Q54,"max-age-nk,10\n");
		fprintf(Q54,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q54,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q54,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q54,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q54,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q54);
	
 

	FILE * Q55 = fopen("input_values55.csv","w");
	if(Q55==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q55,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q55,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q55,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q55,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q55,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q55,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q55,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q55,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q55,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q55,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q55,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q55,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q55,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q55,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q55,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q55,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q55,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q55,"max-tumors,5000\n");
		fprintf(Q55,"No.ticks,11\n");
		fprintf(Q55,"max-age-tam1,10\n");
		fprintf(Q55,"max-age-tam2,10\n");
		fprintf(Q55,"max-age-tan1,10\n");
		fprintf(Q55,"max-age-tan2,10\n");
		fprintf(Q55,"max-age-nk,10\n");
		fprintf(Q55,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q55,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q55,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q55,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q55,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q55);
	
 

	FILE * Q56 = fopen("input_values56.csv","w");
	if(Q56==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q56,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q56,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q56,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q56,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q56,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q56,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q56,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q56,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q56,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q56,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q56,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q56,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q56,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q56,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q56,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q56,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q56,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q56,"max-tumors,5000\n");
		fprintf(Q56,"No.ticks,11\n");
		fprintf(Q56,"max-age-tam1,10\n");
		fprintf(Q56,"max-age-tam2,10\n");
		fprintf(Q56,"max-age-tan1,10\n");
		fprintf(Q56,"max-age-tan2,10\n");
		fprintf(Q56,"max-age-nk,10\n");
		fprintf(Q56,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q56,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q56,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q56,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q56,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q56);
	
 

	FILE * Q57 = fopen("input_values57.csv","w");
	if(Q57==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q57,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q57,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q57,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q57,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q57,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q57,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q57,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q57,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q57,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q57,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q57,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q57,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q57,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q57,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q57,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q57,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q57,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q57,"max-tumors,5000\n");
		fprintf(Q57,"No.ticks,11\n");
		fprintf(Q57,"max-age-tam1,10\n");
		fprintf(Q57,"max-age-tam2,10\n");
		fprintf(Q57,"max-age-tan1,10\n");
		fprintf(Q57,"max-age-tan2,10\n");
		fprintf(Q57,"max-age-nk,10\n");
		fprintf(Q57,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q57,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q57,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q57,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q57,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q57);
	
 

	FILE * Q58 = fopen("input_values58.csv","w");
	if(Q58==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q58,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q58,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q58,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q58,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q58,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q58,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q58,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q58,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q58,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q58,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q58,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q58,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q58,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q58,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q58,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q58,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q58,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q58,"max-tumors,5000\n");
		fprintf(Q58,"No.ticks,11\n");
		fprintf(Q58,"max-age-tam1,10\n");
		fprintf(Q58,"max-age-tam2,10\n");
		fprintf(Q58,"max-age-tan1,10\n");
		fprintf(Q58,"max-age-tan2,10\n");
		fprintf(Q58,"max-age-nk,10\n");
		fprintf(Q58,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q58,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q58,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q58,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q58,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q58);
	
 

	FILE * Q59 = fopen("input_values59.csv","w");
	if(Q59==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q59,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q59,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q59,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q59,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q59,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q59,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q59,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q59,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q59,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q59,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q59,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q59,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q59,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q59,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q59,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q59,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q59,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q59,"max-tumors,5000\n");
		fprintf(Q59,"No.ticks,11\n");
		fprintf(Q59,"max-age-tam1,10\n");
		fprintf(Q59,"max-age-tam2,10\n");
		fprintf(Q59,"max-age-tan1,10\n");
		fprintf(Q59,"max-age-tan2,10\n");
		fprintf(Q59,"max-age-nk,10\n");
		fprintf(Q59,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q59,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q59,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q59,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q59,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q59);
	
 

	FILE * Q60 = fopen("input_values60.csv","w");
	if(Q60==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q60,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q60,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q60,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q60,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q60,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q60,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q60,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q60,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q60,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q60,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q60,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q60,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q60,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q60,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q60,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q60,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q60,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q60,"max-tumors,5000\n");
		fprintf(Q60,"No.ticks,11\n");
		fprintf(Q60,"max-age-tam1,10\n");
		fprintf(Q60,"max-age-tam2,10\n");
		fprintf(Q60,"max-age-tan1,10\n");
		fprintf(Q60,"max-age-tan2,10\n");
		fprintf(Q60,"max-age-nk,10\n");
		fprintf(Q60,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q60,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q60,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q60,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q60,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q60);
	
 

	FILE * Q61 = fopen("input_values61.csv","w");
	if(Q61==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q61,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q61,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q61,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q61,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q61,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q61,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q61,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q61,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q61,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q61,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q61,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q61,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q61,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q61,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q61,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q61,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q61,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q61,"max-tumors,5000\n");
		fprintf(Q61,"No.ticks,11\n");
		fprintf(Q61,"max-age-tam1,10\n");
		fprintf(Q61,"max-age-tam2,10\n");
		fprintf(Q61,"max-age-tan1,10\n");
		fprintf(Q61,"max-age-tan2,10\n");
		fprintf(Q61,"max-age-nk,10\n");
		fprintf(Q61,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q61,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q61,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q61,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q61,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q61);
	
 

	FILE * Q62 = fopen("input_values62.csv","w");
	if(Q62==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q62,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q62,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q62,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q62,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q62,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q62,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q62,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q62,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q62,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q62,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q62,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q62,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q62,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q62,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q62,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q62,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q62,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q62,"max-tumors,5000\n");
		fprintf(Q62,"No.ticks,11\n");
		fprintf(Q62,"max-age-tam1,10\n");
		fprintf(Q62,"max-age-tam2,10\n");
		fprintf(Q62,"max-age-tan1,10\n");
		fprintf(Q62,"max-age-tan2,10\n");
		fprintf(Q62,"max-age-nk,10\n");
		fprintf(Q62,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q62,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q62,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q62,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q62,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q62);
	
 

	FILE * Q63 = fopen("input_values63.csv","w");
	if(Q63==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q63,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q63,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q63,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q63,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q63,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q63,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q63,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q63,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q63,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q63,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q63,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q63,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q63,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q63,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q63,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q63,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q63,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q63,"max-tumors,5000\n");
		fprintf(Q63,"No.ticks,11\n");
		fprintf(Q63,"max-age-tam1,10\n");
		fprintf(Q63,"max-age-tam2,10\n");
		fprintf(Q63,"max-age-tan1,10\n");
		fprintf(Q63,"max-age-tan2,10\n");
		fprintf(Q63,"max-age-nk,10\n");
		fprintf(Q63,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q63,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q63,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q63,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q63,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q63);
	
 

	FILE * Q64 = fopen("input_values64.csv","w");
	if(Q64==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q64,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q64,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q64,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q64,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q64,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q64,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q64,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q64,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q64,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q64,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q64,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q64,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q64,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q64,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q64,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q64,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q64,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q64,"max-tumors,5000\n");
		fprintf(Q64,"No.ticks,11\n");
		fprintf(Q64,"max-age-tam1,10\n");
		fprintf(Q64,"max-age-tam2,10\n");
		fprintf(Q64,"max-age-tan1,10\n");
		fprintf(Q64,"max-age-tan2,10\n");
		fprintf(Q64,"max-age-nk,10\n");
		fprintf(Q64,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q64,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q64,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q64,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q64,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q64);
	
 

	FILE * Q65 = fopen("input_values65.csv","w");
	if(Q65==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q65,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q65,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q65,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q65,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q65,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q65,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q65,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q65,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q65,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q65,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q65,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q65,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q65,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q65,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q65,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q65,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q65,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q65,"max-tumors,5000\n");
		fprintf(Q65,"No.ticks,11\n");
		fprintf(Q65,"max-age-tam1,10\n");
		fprintf(Q65,"max-age-tam2,10\n");
		fprintf(Q65,"max-age-tan1,10\n");
		fprintf(Q65,"max-age-tan2,10\n");
		fprintf(Q65,"max-age-nk,10\n");
		fprintf(Q65,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q65,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q65,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q65,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q65,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q65);
	
 

	FILE * Q66 = fopen("input_values66.csv","w");
	if(Q66==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q66,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q66,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q66,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q66,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q66,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q66,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q66,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q66,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q66,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q66,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q66,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q66,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q66,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q66,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q66,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q66,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q66,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q66,"max-tumors,5000\n");
		fprintf(Q66,"No.ticks,11\n");
		fprintf(Q66,"max-age-tam1,10\n");
		fprintf(Q66,"max-age-tam2,10\n");
		fprintf(Q66,"max-age-tan1,10\n");
		fprintf(Q66,"max-age-tan2,10\n");
		fprintf(Q66,"max-age-nk,10\n");
		fprintf(Q66,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q66,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q66,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q66,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q66,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q66);
	
 

	FILE * Q67 = fopen("input_values67.csv","w");
	if(Q67==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q67,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q67,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q67,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q67,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q67,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q67,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q67,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q67,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q67,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q67,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q67,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q67,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q67,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q67,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q67,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q67,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q67,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q67,"max-tumors,5000\n");
		fprintf(Q67,"No.ticks,11\n");
		fprintf(Q67,"max-age-tam1,10\n");
		fprintf(Q67,"max-age-tam2,10\n");
		fprintf(Q67,"max-age-tan1,10\n");
		fprintf(Q67,"max-age-tan2,10\n");
		fprintf(Q67,"max-age-nk,10\n");
		fprintf(Q67,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q67,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q67,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q67,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q67,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q67);
	
 

	FILE * Q68 = fopen("input_values68.csv","w");
	if(Q68==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q68,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q68,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q68,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q68,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q68,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q68,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q68,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q68,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q68,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q68,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q68,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q68,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q68,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q68,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q68,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q68,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q68,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q68,"max-tumors,5000\n");
		fprintf(Q68,"No.ticks,11\n");
		fprintf(Q68,"max-age-tam1,10\n");
		fprintf(Q68,"max-age-tam2,10\n");
		fprintf(Q68,"max-age-tan1,10\n");
		fprintf(Q68,"max-age-tan2,10\n");
		fprintf(Q68,"max-age-nk,10\n");
		fprintf(Q68,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q68,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q68,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q68,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q68,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q68);
	
 

	FILE * Q69 = fopen("input_values69.csv","w");
	if(Q69==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q69,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q69,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q69,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q69,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q69,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q69,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q69,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q69,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q69,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q69,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q69,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q69,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q69,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q69,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q69,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q69,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q69,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q69,"max-tumors,5000\n");
		fprintf(Q69,"No.ticks,11\n");
		fprintf(Q69,"max-age-tam1,10\n");
		fprintf(Q69,"max-age-tam2,10\n");
		fprintf(Q69,"max-age-tan1,10\n");
		fprintf(Q69,"max-age-tan2,10\n");
		fprintf(Q69,"max-age-nk,10\n");
		fprintf(Q69,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q69,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q69,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q69,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q69,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q69);
	
 

	FILE * Q70 = fopen("input_values70.csv","w");
	if(Q70==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q70,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q70,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q70,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q70,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q70,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q70,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q70,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q70,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q70,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q70,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q70,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q70,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q70,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q70,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q70,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q70,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q70,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q70,"max-tumors,5000\n");
		fprintf(Q70,"No.ticks,11\n");
		fprintf(Q70,"max-age-tam1,10\n");
		fprintf(Q70,"max-age-tam2,10\n");
		fprintf(Q70,"max-age-tan1,10\n");
		fprintf(Q70,"max-age-tan2,10\n");
		fprintf(Q70,"max-age-nk,10\n");
		fprintf(Q70,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q70,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q70,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q70,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q70,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q70);
	
 

	FILE * Q71 = fopen("input_values71.csv","w");
	if(Q71==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q71,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q71,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q71,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q71,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q71,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q71,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q71,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q71,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q71,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q71,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q71,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q71,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q71,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q71,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q71,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q71,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q71,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q71,"max-tumors,5000\n");
		fprintf(Q71,"No.ticks,11\n");
		fprintf(Q71,"max-age-tam1,10\n");
		fprintf(Q71,"max-age-tam2,10\n");
		fprintf(Q71,"max-age-tan1,10\n");
		fprintf(Q71,"max-age-tan2,10\n");
		fprintf(Q71,"max-age-nk,10\n");
		fprintf(Q71,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q71,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q71,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q71,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q71,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q71);
	
 

	FILE * Q72 = fopen("input_values72.csv","w");
	if(Q72==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q72,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q72,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q72,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q72,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q72,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q72,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q72,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q72,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q72,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q72,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q72,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q72,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q72,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q72,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q72,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q72,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q72,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q72,"max-tumors,5000\n");
		fprintf(Q72,"No.ticks,11\n");
		fprintf(Q72,"max-age-tam1,10\n");
		fprintf(Q72,"max-age-tam2,10\n");
		fprintf(Q72,"max-age-tan1,10\n");
		fprintf(Q72,"max-age-tan2,10\n");
		fprintf(Q72,"max-age-nk,10\n");
		fprintf(Q72,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q72,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q72,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q72,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q72,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q72);
	
 

	FILE * Q73 = fopen("input_values73.csv","w");
	if(Q73==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q73,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q73,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q73,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q73,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q73,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q73,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q73,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q73,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q73,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q73,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q73,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q73,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q73,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q73,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q73,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q73,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q73,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q73,"max-tumors,5000\n");
		fprintf(Q73,"No.ticks,11\n");
		fprintf(Q73,"max-age-tam1,10\n");
		fprintf(Q73,"max-age-tam2,10\n");
		fprintf(Q73,"max-age-tan1,10\n");
		fprintf(Q73,"max-age-tan2,10\n");
		fprintf(Q73,"max-age-nk,10\n");
		fprintf(Q73,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q73,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q73,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q73,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q73,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q73);
	
 

	FILE * Q74 = fopen("input_values74.csv","w");
	if(Q74==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q74,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q74,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q74,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q74,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q74,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q74,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q74,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q74,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q74,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q74,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q74,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q74,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q74,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q74,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q74,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q74,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q74,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q74,"max-tumors,5000\n");
		fprintf(Q74,"No.ticks,11\n");
		fprintf(Q74,"max-age-tam1,10\n");
		fprintf(Q74,"max-age-tam2,10\n");
		fprintf(Q74,"max-age-tan1,10\n");
		fprintf(Q74,"max-age-tan2,10\n");
		fprintf(Q74,"max-age-nk,10\n");
		fprintf(Q74,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q74,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q74,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q74,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q74,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q74);
	
 

	FILE * Q75 = fopen("input_values75.csv","w");
	if(Q75==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q75,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q75,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q75,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q75,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q75,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q75,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q75,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q75,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q75,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q75,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q75,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q75,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q75,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q75,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q75,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q75,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q75,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q75,"max-tumors,5000\n");
		fprintf(Q75,"No.ticks,11\n");
		fprintf(Q75,"max-age-tam1,10\n");
		fprintf(Q75,"max-age-tam2,10\n");
		fprintf(Q75,"max-age-tan1,10\n");
		fprintf(Q75,"max-age-tan2,10\n");
		fprintf(Q75,"max-age-nk,10\n");
		fprintf(Q75,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q75,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q75,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q75,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q75,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q75);
	
 

	FILE * Q76 = fopen("input_values76.csv","w");
	if(Q76==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q76,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q76,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q76,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q76,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q76,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q76,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q76,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q76,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q76,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q76,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q76,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q76,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q76,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q76,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q76,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q76,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q76,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q76,"max-tumors,5000\n");
		fprintf(Q76,"No.ticks,11\n");
		fprintf(Q76,"max-age-tam1,10\n");
		fprintf(Q76,"max-age-tam2,10\n");
		fprintf(Q76,"max-age-tan1,10\n");
		fprintf(Q76,"max-age-tan2,10\n");
		fprintf(Q76,"max-age-nk,10\n");
		fprintf(Q76,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q76,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q76,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q76,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q76,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q76);
	
 

	FILE * Q77 = fopen("input_values77.csv","w");
	if(Q77==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q77,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q77,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q77,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q77,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q77,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q77,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q77,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q77,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q77,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q77,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q77,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q77,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q77,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q77,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q77,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q77,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q77,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q77,"max-tumors,5000\n");
		fprintf(Q77,"No.ticks,11\n");
		fprintf(Q77,"max-age-tam1,10\n");
		fprintf(Q77,"max-age-tam2,10\n");
		fprintf(Q77,"max-age-tan1,10\n");
		fprintf(Q77,"max-age-tan2,10\n");
		fprintf(Q77,"max-age-nk,10\n");
		fprintf(Q77,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q77,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q77,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q77,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q77,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q77);
	
 

	FILE * Q78 = fopen("input_values78.csv","w");
	if(Q78==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q78,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q78,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q78,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q78,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q78,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q78,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q78,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q78,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q78,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q78,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q78,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q78,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q78,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q78,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q78,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q78,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q78,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q78,"max-tumors,5000\n");
		fprintf(Q78,"No.ticks,11\n");
		fprintf(Q78,"max-age-tam1,10\n");
		fprintf(Q78,"max-age-tam2,10\n");
		fprintf(Q78,"max-age-tan1,10\n");
		fprintf(Q78,"max-age-tan2,10\n");
		fprintf(Q78,"max-age-nk,10\n");
		fprintf(Q78,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q78,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q78,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q78,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q78,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q78);
	
 

	FILE * Q79 = fopen("input_values79.csv","w");
	if(Q79==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q79,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q79,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q79,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q79,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q79,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q79,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q79,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q79,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q79,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q79,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q79,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q79,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q79,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q79,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q79,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q79,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q79,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q79,"max-tumors,5000\n");
		fprintf(Q79,"No.ticks,11\n");
		fprintf(Q79,"max-age-tam1,10\n");
		fprintf(Q79,"max-age-tam2,10\n");
		fprintf(Q79,"max-age-tan1,10\n");
		fprintf(Q79,"max-age-tan2,10\n");
		fprintf(Q79,"max-age-nk,10\n");
		fprintf(Q79,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q79,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q79,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q79,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q79,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q79);
	
 

	FILE * Q80 = fopen("input_values80.csv","w");
	if(Q80==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q80,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q80,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q80,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q80,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q80,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q80,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q80,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q80,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q80,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q80,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q80,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q80,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q80,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q80,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q80,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q80,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q80,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q80,"max-tumors,5000\n");
		fprintf(Q80,"No.ticks,11\n");
		fprintf(Q80,"max-age-tam1,10\n");
		fprintf(Q80,"max-age-tam2,10\n");
		fprintf(Q80,"max-age-tan1,10\n");
		fprintf(Q80,"max-age-tan2,10\n");
		fprintf(Q80,"max-age-nk,10\n");
		fprintf(Q80,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q80,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q80,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q80,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q80,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q80);
	
 

	FILE * Q81 = fopen("input_values81.csv","w");
	if(Q81==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q81,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q81,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q81,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q81,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q81,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q81,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q81,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q81,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q81,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q81,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q81,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q81,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q81,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q81,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q81,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q81,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q81,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q81,"max-tumors,5000\n");
		fprintf(Q81,"No.ticks,11\n");
		fprintf(Q81,"max-age-tam1,10\n");
		fprintf(Q81,"max-age-tam2,10\n");
		fprintf(Q81,"max-age-tan1,10\n");
		fprintf(Q81,"max-age-tan2,10\n");
		fprintf(Q81,"max-age-nk,10\n");
		fprintf(Q81,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q81,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q81,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q81,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q81,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q81);
	
 

	FILE * Q82 = fopen("input_values82.csv","w");
	if(Q82==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q82,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q82,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q82,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q82,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q82,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q82,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q82,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q82,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q82,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q82,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q82,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q82,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q82,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q82,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q82,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q82,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q82,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q82,"max-tumors,5000\n");
		fprintf(Q82,"No.ticks,11\n");
		fprintf(Q82,"max-age-tam1,10\n");
		fprintf(Q82,"max-age-tam2,10\n");
		fprintf(Q82,"max-age-tan1,10\n");
		fprintf(Q82,"max-age-tan2,10\n");
		fprintf(Q82,"max-age-nk,10\n");
		fprintf(Q82,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q82,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q82,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q82,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q82,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q82);
	
 

	FILE * Q83 = fopen("input_values83.csv","w");
	if(Q83==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q83,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q83,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q83,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q83,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q83,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q83,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q83,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q83,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q83,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q83,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q83,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q83,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q83,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q83,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q83,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q83,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q83,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q83,"max-tumors,5000\n");
		fprintf(Q83,"No.ticks,11\n");
		fprintf(Q83,"max-age-tam1,10\n");
		fprintf(Q83,"max-age-tam2,10\n");
		fprintf(Q83,"max-age-tan1,10\n");
		fprintf(Q83,"max-age-tan2,10\n");
		fprintf(Q83,"max-age-nk,10\n");
		fprintf(Q83,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q83,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q83,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q83,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q83,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q83);
	
 

	FILE * Q84 = fopen("input_values84.csv","w");
	if(Q84==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q84,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q84,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q84,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q84,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q84,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q84,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q84,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q84,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q84,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q84,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q84,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q84,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q84,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q84,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q84,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q84,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q84,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q84,"max-tumors,5000\n");
		fprintf(Q84,"No.ticks,11\n");
		fprintf(Q84,"max-age-tam1,10\n");
		fprintf(Q84,"max-age-tam2,10\n");
		fprintf(Q84,"max-age-tan1,10\n");
		fprintf(Q84,"max-age-tan2,10\n");
		fprintf(Q84,"max-age-nk,10\n");
		fprintf(Q84,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q84,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q84,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q84,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q84,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q84);
	
 

	FILE * Q85 = fopen("input_values85.csv","w");
	if(Q85==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q85,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q85,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q85,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q85,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q85,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q85,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q85,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q85,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q85,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q85,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q85,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q85,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q85,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q85,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q85,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q85,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q85,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q85,"max-tumors,5000\n");
		fprintf(Q85,"No.ticks,11\n");
		fprintf(Q85,"max-age-tam1,10\n");
		fprintf(Q85,"max-age-tam2,10\n");
		fprintf(Q85,"max-age-tan1,10\n");
		fprintf(Q85,"max-age-tan2,10\n");
		fprintf(Q85,"max-age-nk,10\n");
		fprintf(Q85,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q85,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q85,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q85,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q85,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q85);
	
 

	FILE * Q86 = fopen("input_values86.csv","w");
	if(Q86==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q86,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q86,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q86,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q86,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q86,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q86,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q86,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q86,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q86,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q86,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q86,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q86,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q86,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q86,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q86,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q86,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q86,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q86,"max-tumors,5000\n");
		fprintf(Q86,"No.ticks,11\n");
		fprintf(Q86,"max-age-tam1,10\n");
		fprintf(Q86,"max-age-tam2,10\n");
		fprintf(Q86,"max-age-tan1,10\n");
		fprintf(Q86,"max-age-tan2,10\n");
		fprintf(Q86,"max-age-nk,10\n");
		fprintf(Q86,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q86,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q86,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q86,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q86,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q86);
	
 

	FILE * Q87 = fopen("input_values87.csv","w");
	if(Q87==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q87,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q87,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q87,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q87,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q87,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q87,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q87,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q87,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q87,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q87,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q87,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q87,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q87,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q87,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q87,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q87,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q87,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q87,"max-tumors,5000\n");
		fprintf(Q87,"No.ticks,11\n");
		fprintf(Q87,"max-age-tam1,10\n");
		fprintf(Q87,"max-age-tam2,10\n");
		fprintf(Q87,"max-age-tan1,10\n");
		fprintf(Q87,"max-age-tan2,10\n");
		fprintf(Q87,"max-age-nk,10\n");
		fprintf(Q87,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q87,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q87,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q87,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q87,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q87);
	
 

	FILE * Q88 = fopen("input_values88.csv","w");
	if(Q88==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q88,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q88,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q88,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q88,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q88,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q88,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q88,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q88,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q88,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q88,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q88,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q88,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q88,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q88,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q88,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q88,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q88,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q88,"max-tumors,5000\n");
		fprintf(Q88,"No.ticks,11\n");
		fprintf(Q88,"max-age-tam1,10\n");
		fprintf(Q88,"max-age-tam2,10\n");
		fprintf(Q88,"max-age-tan1,10\n");
		fprintf(Q88,"max-age-tan2,10\n");
		fprintf(Q88,"max-age-nk,10\n");
		fprintf(Q88,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q88,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q88,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q88,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q88,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q88);
	
 

	FILE * Q89 = fopen("input_values89.csv","w");
	if(Q89==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q89,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q89,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q89,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q89,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q89,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q89,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q89,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q89,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q89,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q89,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q89,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q89,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q89,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q89,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q89,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q89,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q89,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q89,"max-tumors,5000\n");
		fprintf(Q89,"No.ticks,11\n");
		fprintf(Q89,"max-age-tam1,10\n");
		fprintf(Q89,"max-age-tam2,10\n");
		fprintf(Q89,"max-age-tan1,10\n");
		fprintf(Q89,"max-age-tan2,10\n");
		fprintf(Q89,"max-age-nk,10\n");
		fprintf(Q89,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q89,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q89,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q89,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q89,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q89);
	
 

	FILE * Q90 = fopen("input_values90.csv","w");
	if(Q90==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q90,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q90,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q90,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q90,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q90,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q90,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q90,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q90,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q90,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q90,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q90,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q90,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q90,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q90,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q90,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q90,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q90,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q90,"max-tumors,5000\n");
		fprintf(Q90,"No.ticks,11\n");
		fprintf(Q90,"max-age-tam1,10\n");
		fprintf(Q90,"max-age-tam2,10\n");
		fprintf(Q90,"max-age-tan1,10\n");
		fprintf(Q90,"max-age-tan2,10\n");
		fprintf(Q90,"max-age-nk,10\n");
		fprintf(Q90,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q90,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q90,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q90,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q90,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q90);
	
 

	FILE * Q91 = fopen("input_values91.csv","w");
	if(Q91==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q91,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q91,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q91,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q91,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q91,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q91,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q91,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q91,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q91,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q91,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q91,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q91,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q91,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q91,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q91,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q91,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q91,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q91,"max-tumors,5000\n");
		fprintf(Q91,"No.ticks,11\n");
		fprintf(Q91,"max-age-tam1,10\n");
		fprintf(Q91,"max-age-tam2,10\n");
		fprintf(Q91,"max-age-tan1,10\n");
		fprintf(Q91,"max-age-tan2,10\n");
		fprintf(Q91,"max-age-nk,10\n");
		fprintf(Q91,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q91,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q91,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q91,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q91,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q91);
	
 

	FILE * Q92 = fopen("input_values92.csv","w");
	if(Q92==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q92,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q92,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q92,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q92,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q92,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q92,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q92,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q92,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q92,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q92,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q92,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q92,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q92,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q92,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q92,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q92,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q92,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q92,"max-tumors,5000\n");
		fprintf(Q92,"No.ticks,11\n");
		fprintf(Q92,"max-age-tam1,10\n");
		fprintf(Q92,"max-age-tam2,10\n");
		fprintf(Q92,"max-age-tan1,10\n");
		fprintf(Q92,"max-age-tan2,10\n");
		fprintf(Q92,"max-age-nk,10\n");
		fprintf(Q92,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q92,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q92,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q92,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q92,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q92);
	
 

	FILE * Q93 = fopen("input_values93.csv","w");
	if(Q93==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q93,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q93,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q93,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q93,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q93,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q93,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q93,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q93,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q93,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q93,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q93,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q93,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q93,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q93,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q93,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q93,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q93,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q93,"max-tumors,5000\n");
		fprintf(Q93,"No.ticks,11\n");
		fprintf(Q93,"max-age-tam1,10\n");
		fprintf(Q93,"max-age-tam2,10\n");
		fprintf(Q93,"max-age-tan1,10\n");
		fprintf(Q93,"max-age-tan2,10\n");
		fprintf(Q93,"max-age-nk,10\n");
		fprintf(Q93,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q93,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q93,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q93,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q93,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q93);
	
 

	FILE * Q94 = fopen("input_values94.csv","w");
	if(Q94==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q94,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q94,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q94,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q94,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q94,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q94,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q94,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q94,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q94,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q94,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q94,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q94,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q94,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q94,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q94,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q94,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q94,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q94,"max-tumors,5000\n");
		fprintf(Q94,"No.ticks,11\n");
		fprintf(Q94,"max-age-tam1,10\n");
		fprintf(Q94,"max-age-tam2,10\n");
		fprintf(Q94,"max-age-tan1,10\n");
		fprintf(Q94,"max-age-tan2,10\n");
		fprintf(Q94,"max-age-nk,10\n");
		fprintf(Q94,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q94,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q94,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q94,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q94,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q94);
	
 

	FILE * Q95 = fopen("input_values95.csv","w");
	if(Q95==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q95,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q95,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q95,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q95,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q95,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q95,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q95,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q95,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q95,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q95,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q95,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q95,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q95,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q95,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q95,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q95,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q95,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q95,"max-tumors,5000\n");
		fprintf(Q95,"No.ticks,11\n");
		fprintf(Q95,"max-age-tam1,10\n");
		fprintf(Q95,"max-age-tam2,10\n");
		fprintf(Q95,"max-age-tan1,10\n");
		fprintf(Q95,"max-age-tan2,10\n");
		fprintf(Q95,"max-age-nk,10\n");
		fprintf(Q95,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q95,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q95,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q95,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q95,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q95);
	
 

	FILE * Q96 = fopen("input_values96.csv","w");
	if(Q96==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q96,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q96,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q96,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q96,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q96,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q96,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q96,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q96,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q96,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q96,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q96,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q96,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q96,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q96,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q96,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q96,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q96,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q96,"max-tumors,5000\n");
		fprintf(Q96,"No.ticks,11\n");
		fprintf(Q96,"max-age-tam1,10\n");
		fprintf(Q96,"max-age-tam2,10\n");
		fprintf(Q96,"max-age-tan1,10\n");
		fprintf(Q96,"max-age-tan2,10\n");
		fprintf(Q96,"max-age-nk,10\n");
		fprintf(Q96,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q96,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q96,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q96,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q96,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q96);
	
 

	FILE * Q97 = fopen("input_values97.csv","w");
	if(Q97==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q97,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q97,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q97,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q97,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q97,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q97,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q97,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q97,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q97,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q97,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q97,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q97,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q97,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q97,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q97,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q97,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q97,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q97,"max-tumors,5000\n");
		fprintf(Q97,"No.ticks,11\n");
		fprintf(Q97,"max-age-tam1,10\n");
		fprintf(Q97,"max-age-tam2,10\n");
		fprintf(Q97,"max-age-tan1,10\n");
		fprintf(Q97,"max-age-tan2,10\n");
		fprintf(Q97,"max-age-nk,10\n");
		fprintf(Q97,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q97,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q97,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q97,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q97,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q97);
	
 

	FILE * Q98 = fopen("input_values98.csv","w");
	if(Q98==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q98,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q98,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q98,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q98,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q98,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q98,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q98,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q98,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q98,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q98,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q98,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q98,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q98,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q98,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q98,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q98,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q98,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q98,"max-tumors,5000\n");
		fprintf(Q98,"No.ticks,11\n");
		fprintf(Q98,"max-age-tam1,10\n");
		fprintf(Q98,"max-age-tam2,10\n");
		fprintf(Q98,"max-age-tan1,10\n");
		fprintf(Q98,"max-age-tan2,10\n");
		fprintf(Q98,"max-age-nk,10\n");
		fprintf(Q98,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q98,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q98,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q98,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q98,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q98);
	
 

	FILE * Q99 = fopen("input_values99.csv","w");
	if(Q99==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q99,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q99,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q99,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q99,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q99,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q99,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q99,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q99,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q99,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q99,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q99,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q99,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q99,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q99,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q99,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q99,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q99,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q99,"max-tumors,5000\n");
		fprintf(Q99,"No.ticks,11\n");
		fprintf(Q99,"max-age-tam1,10\n");
		fprintf(Q99,"max-age-tam2,10\n");
		fprintf(Q99,"max-age-tan1,10\n");
		fprintf(Q99,"max-age-tan2,10\n");
		fprintf(Q99,"max-age-nk,10\n");
		fprintf(Q99,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q99,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q99,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q99,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q99,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q99);
	
 

	FILE * Q100 = fopen("input_values100.csv","w");
	if(Q100==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q100,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q100,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q100,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q100,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q100,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q100,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q100,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q100,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q100,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q100,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q100,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q100,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q100,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q100,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q100,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q100,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q100,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q100,"max-tumors,5000\n");
		fprintf(Q100,"No.ticks,11\n");
		fprintf(Q100,"max-age-tam1,10\n");
		fprintf(Q100,"max-age-tam2,10\n");
		fprintf(Q100,"max-age-tan1,10\n");
		fprintf(Q100,"max-age-tan2,10\n");
		fprintf(Q100,"max-age-nk,10\n");
		fprintf(Q100,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q100,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q100,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q100,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q100,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q100);
	
 

	FILE * Q101 = fopen("input_values101.csv","w");
	if(Q101==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q101,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q101,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q101,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q101,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q101,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q101,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q101,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q101,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q101,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q101,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q101,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q101,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q101,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q101,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q101,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q101,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q101,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q101,"max-tumors,5000\n");
		fprintf(Q101,"No.ticks,11\n");
		fprintf(Q101,"max-age-tam1,10\n");
		fprintf(Q101,"max-age-tam2,10\n");
		fprintf(Q101,"max-age-tan1,10\n");
		fprintf(Q101,"max-age-tan2,10\n");
		fprintf(Q101,"max-age-nk,10\n");
		fprintf(Q101,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q101,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q101,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q101,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q101,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q101);
	
 

	FILE * Q102 = fopen("input_values102.csv","w");
	if(Q102==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q102,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q102,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q102,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q102,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q102,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q102,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q102,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q102,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q102,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q102,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q102,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q102,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q102,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q102,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q102,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q102,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q102,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q102,"max-tumors,5000\n");
		fprintf(Q102,"No.ticks,11\n");
		fprintf(Q102,"max-age-tam1,10\n");
		fprintf(Q102,"max-age-tam2,10\n");
		fprintf(Q102,"max-age-tan1,10\n");
		fprintf(Q102,"max-age-tan2,10\n");
		fprintf(Q102,"max-age-nk,10\n");
		fprintf(Q102,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q102,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q102,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q102,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q102,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q102);
	
 

	FILE * Q103 = fopen("input_values103.csv","w");
	if(Q103==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q103,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q103,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q103,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q103,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q103,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q103,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q103,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q103,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q103,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q103,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q103,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q103,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q103,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q103,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q103,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q103,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q103,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q103,"max-tumors,5000\n");
		fprintf(Q103,"No.ticks,11\n");
		fprintf(Q103,"max-age-tam1,10\n");
		fprintf(Q103,"max-age-tam2,10\n");
		fprintf(Q103,"max-age-tan1,10\n");
		fprintf(Q103,"max-age-tan2,10\n");
		fprintf(Q103,"max-age-nk,10\n");
		fprintf(Q103,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q103,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q103,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q103,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q103,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q103);
	
 

	FILE * Q104 = fopen("input_values104.csv","w");
	if(Q104==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q104,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q104,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q104,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q104,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q104,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q104,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q104,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q104,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q104,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q104,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q104,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q104,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q104,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q104,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q104,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q104,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q104,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q104,"max-tumors,5000\n");
		fprintf(Q104,"No.ticks,11\n");
		fprintf(Q104,"max-age-tam1,10\n");
		fprintf(Q104,"max-age-tam2,10\n");
		fprintf(Q104,"max-age-tan1,10\n");
		fprintf(Q104,"max-age-tan2,10\n");
		fprintf(Q104,"max-age-nk,10\n");
		fprintf(Q104,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q104,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q104,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q104,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q104,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q104);
	
 

	FILE * Q105 = fopen("input_values105.csv","w");
	if(Q105==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q105,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q105,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q105,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q105,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q105,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q105,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q105,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q105,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q105,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q105,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q105,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q105,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q105,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q105,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q105,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q105,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q105,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q105,"max-tumors,5000\n");
		fprintf(Q105,"No.ticks,11\n");
		fprintf(Q105,"max-age-tam1,10\n");
		fprintf(Q105,"max-age-tam2,10\n");
		fprintf(Q105,"max-age-tan1,10\n");
		fprintf(Q105,"max-age-tan2,10\n");
		fprintf(Q105,"max-age-nk,10\n");
		fprintf(Q105,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q105,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q105,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q105,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q105,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q105);
	
 

	FILE * Q106 = fopen("input_values106.csv","w");
	if(Q106==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q106,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q106,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q106,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q106,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q106,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q106,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q106,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q106,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q106,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q106,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q106,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q106,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q106,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q106,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q106,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q106,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q106,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q106,"max-tumors,5000\n");
		fprintf(Q106,"No.ticks,11\n");
		fprintf(Q106,"max-age-tam1,10\n");
		fprintf(Q106,"max-age-tam2,10\n");
		fprintf(Q106,"max-age-tan1,10\n");
		fprintf(Q106,"max-age-tan2,10\n");
		fprintf(Q106,"max-age-nk,10\n");
		fprintf(Q106,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q106,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q106,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q106,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q106,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q106);
	
 

	FILE * Q107 = fopen("input_values107.csv","w");
	if(Q107==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q107,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q107,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q107,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q107,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q107,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q107,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q107,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q107,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q107,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q107,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q107,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q107,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q107,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q107,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q107,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q107,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q107,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q107,"max-tumors,5000\n");
		fprintf(Q107,"No.ticks,11\n");
		fprintf(Q107,"max-age-tam1,10\n");
		fprintf(Q107,"max-age-tam2,10\n");
		fprintf(Q107,"max-age-tan1,10\n");
		fprintf(Q107,"max-age-tan2,10\n");
		fprintf(Q107,"max-age-nk,10\n");
		fprintf(Q107,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q107,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q107,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q107,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q107,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q107);
	
 

	FILE * Q108 = fopen("input_values108.csv","w");
	if(Q108==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q108,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q108,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q108,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q108,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q108,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q108,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q108,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q108,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q108,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q108,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q108,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q108,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q108,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q108,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q108,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q108,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q108,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q108,"max-tumors,5000\n");
		fprintf(Q108,"No.ticks,11\n");
		fprintf(Q108,"max-age-tam1,10\n");
		fprintf(Q108,"max-age-tam2,10\n");
		fprintf(Q108,"max-age-tan1,10\n");
		fprintf(Q108,"max-age-tan2,10\n");
		fprintf(Q108,"max-age-nk,10\n");
		fprintf(Q108,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q108,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q108,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q108,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q108,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q108);
	
 

	FILE * Q109 = fopen("input_values109.csv","w");
	if(Q109==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q109,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q109,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q109,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q109,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q109,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q109,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q109,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q109,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q109,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q109,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q109,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q109,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q109,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q109,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q109,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q109,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q109,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q109,"max-tumors,5000\n");
		fprintf(Q109,"No.ticks,11\n");
		fprintf(Q109,"max-age-tam1,10\n");
		fprintf(Q109,"max-age-tam2,10\n");
		fprintf(Q109,"max-age-tan1,10\n");
		fprintf(Q109,"max-age-tan2,10\n");
		fprintf(Q109,"max-age-nk,10\n");
		fprintf(Q109,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q109,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q109,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q109,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q109,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q109);
	
 

	FILE * Q110 = fopen("input_values110.csv","w");
	if(Q110==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q110,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q110,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q110,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q110,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q110,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q110,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q110,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q110,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q110,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q110,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q110,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q110,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q110,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q110,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q110,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q110,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q110,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q110,"max-tumors,5000\n");
		fprintf(Q110,"No.ticks,11\n");
		fprintf(Q110,"max-age-tam1,10\n");
		fprintf(Q110,"max-age-tam2,10\n");
		fprintf(Q110,"max-age-tan1,10\n");
		fprintf(Q110,"max-age-tan2,10\n");
		fprintf(Q110,"max-age-nk,10\n");
		fprintf(Q110,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q110,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q110,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q110,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q110,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q110);
	
 

	FILE * Q111 = fopen("input_values111.csv","w");
	if(Q111==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q111,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q111,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q111,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q111,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q111,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q111,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q111,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q111,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q111,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q111,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q111,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q111,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q111,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q111,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q111,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q111,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q111,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q111,"max-tumors,5000\n");
		fprintf(Q111,"No.ticks,11\n");
		fprintf(Q111,"max-age-tam1,10\n");
		fprintf(Q111,"max-age-tam2,10\n");
		fprintf(Q111,"max-age-tan1,10\n");
		fprintf(Q111,"max-age-tan2,10\n");
		fprintf(Q111,"max-age-nk,10\n");
		fprintf(Q111,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q111,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q111,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q111,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q111,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q111);
	
 

	FILE * Q112 = fopen("input_values112.csv","w");
	if(Q112==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q112,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q112,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q112,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q112,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q112,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q112,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q112,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q112,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q112,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q112,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q112,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q112,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q112,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q112,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q112,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q112,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q112,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q112,"max-tumors,5000\n");
		fprintf(Q112,"No.ticks,11\n");
		fprintf(Q112,"max-age-tam1,10\n");
		fprintf(Q112,"max-age-tam2,10\n");
		fprintf(Q112,"max-age-tan1,10\n");
		fprintf(Q112,"max-age-tan2,10\n");
		fprintf(Q112,"max-age-nk,10\n");
		fprintf(Q112,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q112,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q112,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q112,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q112,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q112);
	
 

	FILE * Q113 = fopen("input_values113.csv","w");
	if(Q113==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q113,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q113,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q113,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q113,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q113,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q113,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q113,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q113,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q113,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q113,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q113,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q113,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q113,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q113,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q113,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q113,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q113,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q113,"max-tumors,5000\n");
		fprintf(Q113,"No.ticks,11\n");
		fprintf(Q113,"max-age-tam1,10\n");
		fprintf(Q113,"max-age-tam2,10\n");
		fprintf(Q113,"max-age-tan1,10\n");
		fprintf(Q113,"max-age-tan2,10\n");
		fprintf(Q113,"max-age-nk,10\n");
		fprintf(Q113,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q113,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q113,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q113,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q113,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q113);
	
 

	FILE * Q114 = fopen("input_values114.csv","w");
	if(Q114==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q114,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q114,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q114,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q114,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q114,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q114,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q114,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q114,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q114,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q114,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q114,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q114,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q114,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q114,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q114,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q114,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q114,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q114,"max-tumors,5000\n");
		fprintf(Q114,"No.ticks,11\n");
		fprintf(Q114,"max-age-tam1,10\n");
		fprintf(Q114,"max-age-tam2,10\n");
		fprintf(Q114,"max-age-tan1,10\n");
		fprintf(Q114,"max-age-tan2,10\n");
		fprintf(Q114,"max-age-nk,10\n");
		fprintf(Q114,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q114,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q114,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q114,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q114,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q114);
	
 

	FILE * Q115 = fopen("input_values115.csv","w");
	if(Q115==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q115,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q115,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q115,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q115,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q115,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q115,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q115,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q115,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q115,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q115,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q115,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q115,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q115,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q115,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q115,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q115,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q115,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q115,"max-tumors,5000\n");
		fprintf(Q115,"No.ticks,11\n");
		fprintf(Q115,"max-age-tam1,10\n");
		fprintf(Q115,"max-age-tam2,10\n");
		fprintf(Q115,"max-age-tan1,10\n");
		fprintf(Q115,"max-age-tan2,10\n");
		fprintf(Q115,"max-age-nk,10\n");
		fprintf(Q115,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q115,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q115,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q115,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q115,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q115);
	
 

	FILE * Q116 = fopen("input_values116.csv","w");
	if(Q116==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q116,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q116,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q116,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q116,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q116,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q116,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q116,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q116,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q116,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q116,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q116,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q116,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q116,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q116,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q116,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q116,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q116,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q116,"max-tumors,5000\n");
		fprintf(Q116,"No.ticks,11\n");
		fprintf(Q116,"max-age-tam1,10\n");
		fprintf(Q116,"max-age-tam2,10\n");
		fprintf(Q116,"max-age-tan1,10\n");
		fprintf(Q116,"max-age-tan2,10\n");
		fprintf(Q116,"max-age-nk,10\n");
		fprintf(Q116,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q116,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q116,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q116,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q116,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q116);
	
 

	FILE * Q117 = fopen("input_values117.csv","w");
	if(Q117==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q117,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q117,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q117,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q117,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q117,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q117,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q117,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q117,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q117,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q117,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q117,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q117,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q117,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q117,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q117,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q117,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q117,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q117,"max-tumors,5000\n");
		fprintf(Q117,"No.ticks,11\n");
		fprintf(Q117,"max-age-tam1,10\n");
		fprintf(Q117,"max-age-tam2,10\n");
		fprintf(Q117,"max-age-tan1,10\n");
		fprintf(Q117,"max-age-tan2,10\n");
		fprintf(Q117,"max-age-nk,10\n");
		fprintf(Q117,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q117,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q117,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q117,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q117,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q117);
	
 

	FILE * Q118 = fopen("input_values118.csv","w");
	if(Q118==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q118,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q118,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q118,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q118,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q118,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q118,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q118,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q118,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q118,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q118,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q118,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q118,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q118,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q118,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q118,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q118,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q118,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q118,"max-tumors,5000\n");
		fprintf(Q118,"No.ticks,11\n");
		fprintf(Q118,"max-age-tam1,10\n");
		fprintf(Q118,"max-age-tam2,10\n");
		fprintf(Q118,"max-age-tan1,10\n");
		fprintf(Q118,"max-age-tan2,10\n");
		fprintf(Q118,"max-age-nk,10\n");
		fprintf(Q118,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q118,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q118,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q118,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q118,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q118);
	
 

	FILE * Q119 = fopen("input_values119.csv","w");
	if(Q119==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q119,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q119,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q119,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q119,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q119,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q119,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q119,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q119,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q119,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q119,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q119,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q119,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q119,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q119,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q119,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q119,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q119,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q119,"max-tumors,5000\n");
		fprintf(Q119,"No.ticks,11\n");
		fprintf(Q119,"max-age-tam1,10\n");
		fprintf(Q119,"max-age-tam2,10\n");
		fprintf(Q119,"max-age-tan1,10\n");
		fprintf(Q119,"max-age-tan2,10\n");
		fprintf(Q119,"max-age-nk,10\n");
		fprintf(Q119,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q119,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q119,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q119,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q119,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q119);
	
 

	FILE * Q120 = fopen("input_values120.csv","w");
	if(Q120==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q120,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q120,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q120,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q120,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q120,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q120,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q120,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q120,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q120,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q120,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q120,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q120,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q120,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q120,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q120,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q120,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q120,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q120,"max-tumors,5000\n");
		fprintf(Q120,"No.ticks,11\n");
		fprintf(Q120,"max-age-tam1,10\n");
		fprintf(Q120,"max-age-tam2,10\n");
		fprintf(Q120,"max-age-tan1,10\n");
		fprintf(Q120,"max-age-tan2,10\n");
		fprintf(Q120,"max-age-nk,10\n");
		fprintf(Q120,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q120,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q120,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q120,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q120,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q120);
	
 

	FILE * Q121 = fopen("input_values121.csv","w");
	if(Q121==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q121,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q121,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q121,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q121,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q121,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q121,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q121,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q121,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q121,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q121,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q121,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q121,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q121,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q121,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q121,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q121,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q121,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q121,"max-tumors,5000\n");
		fprintf(Q121,"No.ticks,11\n");
		fprintf(Q121,"max-age-tam1,10\n");
		fprintf(Q121,"max-age-tam2,10\n");
		fprintf(Q121,"max-age-tan1,10\n");
		fprintf(Q121,"max-age-tan2,10\n");
		fprintf(Q121,"max-age-nk,10\n");
		fprintf(Q121,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q121,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q121,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q121,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q121,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q121);
	
 

	FILE * Q122 = fopen("input_values122.csv","w");
	if(Q122==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q122,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q122,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q122,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q122,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q122,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q122,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q122,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q122,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q122,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q122,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q122,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q122,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q122,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q122,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q122,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q122,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q122,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q122,"max-tumors,5000\n");
		fprintf(Q122,"No.ticks,11\n");
		fprintf(Q122,"max-age-tam1,10\n");
		fprintf(Q122,"max-age-tam2,10\n");
		fprintf(Q122,"max-age-tan1,10\n");
		fprintf(Q122,"max-age-tan2,10\n");
		fprintf(Q122,"max-age-nk,10\n");
		fprintf(Q122,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q122,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q122,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q122,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q122,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q122);
	
 

	FILE * Q123 = fopen("input_values123.csv","w");
	if(Q123==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q123,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q123,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q123,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q123,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q123,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q123,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q123,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q123,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q123,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q123,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q123,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q123,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q123,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q123,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q123,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q123,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q123,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q123,"max-tumors,5000\n");
		fprintf(Q123,"No.ticks,11\n");
		fprintf(Q123,"max-age-tam1,10\n");
		fprintf(Q123,"max-age-tam2,10\n");
		fprintf(Q123,"max-age-tan1,10\n");
		fprintf(Q123,"max-age-tan2,10\n");
		fprintf(Q123,"max-age-nk,10\n");
		fprintf(Q123,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q123,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q123,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q123,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q123,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q123);
	
 

	FILE * Q124 = fopen("input_values124.csv","w");
	if(Q124==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q124,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q124,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q124,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q124,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q124,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q124,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q124,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q124,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q124,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q124,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q124,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q124,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q124,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q124,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q124,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q124,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q124,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q124,"max-tumors,5000\n");
		fprintf(Q124,"No.ticks,11\n");
		fprintf(Q124,"max-age-tam1,10\n");
		fprintf(Q124,"max-age-tam2,10\n");
		fprintf(Q124,"max-age-tan1,10\n");
		fprintf(Q124,"max-age-tan2,10\n");
		fprintf(Q124,"max-age-nk,10\n");
		fprintf(Q124,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q124,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q124,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q124,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q124,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q124);
	
 

	FILE * Q125 = fopen("input_values125.csv","w");
	if(Q125==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q125,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q125,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q125,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q125,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q125,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q125,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q125,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q125,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q125,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q125,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q125,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q125,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q125,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q125,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q125,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q125,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q125,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q125,"max-tumors,5000\n");
		fprintf(Q125,"No.ticks,11\n");
		fprintf(Q125,"max-age-tam1,10\n");
		fprintf(Q125,"max-age-tam2,10\n");
		fprintf(Q125,"max-age-tan1,10\n");
		fprintf(Q125,"max-age-tan2,10\n");
		fprintf(Q125,"max-age-nk,10\n");
		fprintf(Q125,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q125,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q125,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q125,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q125,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q125);
	
 

	FILE * Q126 = fopen("input_values126.csv","w");
	if(Q126==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q126,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q126,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q126,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q126,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q126,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q126,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q126,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q126,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q126,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q126,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q126,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q126,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q126,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q126,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q126,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q126,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q126,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q126,"max-tumors,5000\n");
		fprintf(Q126,"No.ticks,11\n");
		fprintf(Q126,"max-age-tam1,10\n");
		fprintf(Q126,"max-age-tam2,10\n");
		fprintf(Q126,"max-age-tan1,10\n");
		fprintf(Q126,"max-age-tan2,10\n");
		fprintf(Q126,"max-age-nk,10\n");
		fprintf(Q126,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q126,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q126,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q126,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q126,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q126);
	
 

	FILE * Q127 = fopen("input_values127.csv","w");
	if(Q127==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q127,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q127,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q127,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q127,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q127,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q127,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q127,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q127,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q127,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q127,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q127,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q127,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q127,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q127,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q127,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q127,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q127,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q127,"max-tumors,5000\n");
		fprintf(Q127,"No.ticks,11\n");
		fprintf(Q127,"max-age-tam1,10\n");
		fprintf(Q127,"max-age-tam2,10\n");
		fprintf(Q127,"max-age-tan1,10\n");
		fprintf(Q127,"max-age-tan2,10\n");
		fprintf(Q127,"max-age-nk,10\n");
		fprintf(Q127,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q127,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q127,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q127,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q127,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q127);
	
 

	FILE * Q128 = fopen("input_values128.csv","w");
	if(Q128==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q128,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q128,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q128,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q128,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q128,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q128,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q128,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q128,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q128,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q128,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q128,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q128,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q128,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q128,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q128,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q128,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q128,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q128,"max-tumors,5000\n");
		fprintf(Q128,"No.ticks,11\n");
		fprintf(Q128,"max-age-tam1,10\n");
		fprintf(Q128,"max-age-tam2,10\n");
		fprintf(Q128,"max-age-tan1,10\n");
		fprintf(Q128,"max-age-tan2,10\n");
		fprintf(Q128,"max-age-nk,10\n");
		fprintf(Q128,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q128,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q128,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q128,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q128,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q128);
	
 

	FILE * Q129 = fopen("input_values129.csv","w");
	if(Q129==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q129,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q129,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q129,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q129,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q129,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q129,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q129,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q129,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q129,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q129,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q129,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q129,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q129,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q129,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q129,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q129,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q129,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q129,"max-tumors,5000\n");
		fprintf(Q129,"No.ticks,11\n");
		fprintf(Q129,"max-age-tam1,10\n");
		fprintf(Q129,"max-age-tam2,10\n");
		fprintf(Q129,"max-age-tan1,10\n");
		fprintf(Q129,"max-age-tan2,10\n");
		fprintf(Q129,"max-age-nk,10\n");
		fprintf(Q129,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q129,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q129,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q129,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q129,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q129);
	
 

	FILE * Q130 = fopen("input_values130.csv","w");
	if(Q130==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q130,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q130,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q130,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q130,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q130,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q130,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q130,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q130,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q130,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q130,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q130,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q130,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q130,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q130,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q130,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q130,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q130,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q130,"max-tumors,5000\n");
		fprintf(Q130,"No.ticks,11\n");
		fprintf(Q130,"max-age-tam1,10\n");
		fprintf(Q130,"max-age-tam2,10\n");
		fprintf(Q130,"max-age-tan1,10\n");
		fprintf(Q130,"max-age-tan2,10\n");
		fprintf(Q130,"max-age-nk,10\n");
		fprintf(Q130,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q130,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q130,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q130,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q130,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q130);
	
 

	FILE * Q131 = fopen("input_values131.csv","w");
	if(Q131==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q131,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q131,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q131,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q131,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q131,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q131,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q131,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q131,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q131,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q131,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q131,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q131,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q131,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q131,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q131,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q131,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q131,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q131,"max-tumors,5000\n");
		fprintf(Q131,"No.ticks,11\n");
		fprintf(Q131,"max-age-tam1,10\n");
		fprintf(Q131,"max-age-tam2,10\n");
		fprintf(Q131,"max-age-tan1,10\n");
		fprintf(Q131,"max-age-tan2,10\n");
		fprintf(Q131,"max-age-nk,10\n");
		fprintf(Q131,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q131,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q131,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q131,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q131,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q131);
	
 

	FILE * Q132 = fopen("input_values132.csv","w");
	if(Q132==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q132,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q132,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q132,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q132,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q132,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q132,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q132,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q132,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q132,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q132,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q132,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q132,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q132,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q132,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q132,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q132,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q132,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q132,"max-tumors,5000\n");
		fprintf(Q132,"No.ticks,11\n");
		fprintf(Q132,"max-age-tam1,10\n");
		fprintf(Q132,"max-age-tam2,10\n");
		fprintf(Q132,"max-age-tan1,10\n");
		fprintf(Q132,"max-age-tan2,10\n");
		fprintf(Q132,"max-age-nk,10\n");
		fprintf(Q132,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q132,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q132,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q132,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q132,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q132);
	
 

	FILE * Q133 = fopen("input_values133.csv","w");
	if(Q133==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q133,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q133,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q133,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q133,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q133,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q133,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q133,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q133,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q133,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q133,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q133,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q133,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q133,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q133,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q133,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q133,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q133,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q133,"max-tumors,5000\n");
		fprintf(Q133,"No.ticks,11\n");
		fprintf(Q133,"max-age-tam1,10\n");
		fprintf(Q133,"max-age-tam2,10\n");
		fprintf(Q133,"max-age-tan1,10\n");
		fprintf(Q133,"max-age-tan2,10\n");
		fprintf(Q133,"max-age-nk,10\n");
		fprintf(Q133,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q133,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q133,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q133,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q133,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q133);
	
 

	FILE * Q134 = fopen("input_values134.csv","w");
	if(Q134==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q134,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q134,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q134,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q134,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q134,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q134,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q134,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q134,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q134,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q134,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q134,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q134,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q134,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q134,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q134,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q134,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q134,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q134,"max-tumors,5000\n");
		fprintf(Q134,"No.ticks,11\n");
		fprintf(Q134,"max-age-tam1,10\n");
		fprintf(Q134,"max-age-tam2,10\n");
		fprintf(Q134,"max-age-tan1,10\n");
		fprintf(Q134,"max-age-tan2,10\n");
		fprintf(Q134,"max-age-nk,10\n");
		fprintf(Q134,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q134,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q134,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q134,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q134,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q134);
	
 

	FILE * Q135 = fopen("input_values135.csv","w");
	if(Q135==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q135,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q135,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q135,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q135,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q135,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q135,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q135,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q135,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q135,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q135,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q135,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q135,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q135,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q135,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q135,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q135,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q135,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q135,"max-tumors,5000\n");
		fprintf(Q135,"No.ticks,11\n");
		fprintf(Q135,"max-age-tam1,10\n");
		fprintf(Q135,"max-age-tam2,10\n");
		fprintf(Q135,"max-age-tan1,10\n");
		fprintf(Q135,"max-age-tan2,10\n");
		fprintf(Q135,"max-age-nk,10\n");
		fprintf(Q135,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q135,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q135,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q135,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q135,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q135);
	
 

	FILE * Q136 = fopen("input_values136.csv","w");
	if(Q136==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q136,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q136,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q136,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q136,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q136,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q136,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q136,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q136,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q136,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q136,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q136,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q136,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q136,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q136,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q136,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q136,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q136,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q136,"max-tumors,5000\n");
		fprintf(Q136,"No.ticks,11\n");
		fprintf(Q136,"max-age-tam1,10\n");
		fprintf(Q136,"max-age-tam2,10\n");
		fprintf(Q136,"max-age-tan1,10\n");
		fprintf(Q136,"max-age-tan2,10\n");
		fprintf(Q136,"max-age-nk,10\n");
		fprintf(Q136,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q136,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q136,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q136,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q136,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q136);
	
 

	FILE * Q137 = fopen("input_values137.csv","w");
	if(Q137==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q137,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q137,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q137,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q137,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q137,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q137,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q137,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q137,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q137,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q137,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q137,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q137,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q137,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q137,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q137,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q137,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q137,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q137,"max-tumors,5000\n");
		fprintf(Q137,"No.ticks,11\n");
		fprintf(Q137,"max-age-tam1,10\n");
		fprintf(Q137,"max-age-tam2,10\n");
		fprintf(Q137,"max-age-tan1,10\n");
		fprintf(Q137,"max-age-tan2,10\n");
		fprintf(Q137,"max-age-nk,10\n");
		fprintf(Q137,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q137,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q137,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q137,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q137,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q137);
	
 

	FILE * Q138 = fopen("input_values138.csv","w");
	if(Q138==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q138,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q138,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q138,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q138,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q138,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q138,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q138,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q138,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q138,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q138,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q138,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q138,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q138,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q138,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q138,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q138,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q138,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q138,"max-tumors,5000\n");
		fprintf(Q138,"No.ticks,11\n");
		fprintf(Q138,"max-age-tam1,10\n");
		fprintf(Q138,"max-age-tam2,10\n");
		fprintf(Q138,"max-age-tan1,10\n");
		fprintf(Q138,"max-age-tan2,10\n");
		fprintf(Q138,"max-age-nk,10\n");
		fprintf(Q138,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q138,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q138,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q138,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q138,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q138);
	
 

	FILE * Q139 = fopen("input_values139.csv","w");
	if(Q139==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q139,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q139,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q139,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q139,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q139,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q139,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q139,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q139,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q139,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q139,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q139,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q139,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q139,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q139,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q139,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q139,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q139,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q139,"max-tumors,5000\n");
		fprintf(Q139,"No.ticks,11\n");
		fprintf(Q139,"max-age-tam1,10\n");
		fprintf(Q139,"max-age-tam2,10\n");
		fprintf(Q139,"max-age-tan1,10\n");
		fprintf(Q139,"max-age-tan2,10\n");
		fprintf(Q139,"max-age-nk,10\n");
		fprintf(Q139,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q139,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q139,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q139,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q139,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q139);
	
 

	FILE * Q140 = fopen("input_values140.csv","w");
	if(Q140==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q140,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q140,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q140,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q140,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q140,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q140,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q140,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q140,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q140,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q140,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q140,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q140,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q140,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q140,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q140,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q140,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q140,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q140,"max-tumors,5000\n");
		fprintf(Q140,"No.ticks,11\n");
		fprintf(Q140,"max-age-tam1,10\n");
		fprintf(Q140,"max-age-tam2,10\n");
		fprintf(Q140,"max-age-tan1,10\n");
		fprintf(Q140,"max-age-tan2,10\n");
		fprintf(Q140,"max-age-nk,10\n");
		fprintf(Q140,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q140,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q140,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q140,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q140,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q140);
	
 

	FILE * Q141 = fopen("input_values141.csv","w");
	if(Q141==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q141,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q141,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q141,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q141,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q141,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q141,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q141,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q141,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q141,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q141,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q141,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q141,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q141,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q141,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q141,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q141,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q141,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q141,"max-tumors,5000\n");
		fprintf(Q141,"No.ticks,11\n");
		fprintf(Q141,"max-age-tam1,10\n");
		fprintf(Q141,"max-age-tam2,10\n");
		fprintf(Q141,"max-age-tan1,10\n");
		fprintf(Q141,"max-age-tan2,10\n");
		fprintf(Q141,"max-age-nk,10\n");
		fprintf(Q141,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q141,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q141,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q141,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q141,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q141);
	
 

	FILE * Q142 = fopen("input_values142.csv","w");
	if(Q142==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q142,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q142,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q142,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q142,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q142,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q142,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q142,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q142,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q142,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q142,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q142,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q142,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q142,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q142,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q142,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q142,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q142,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q142,"max-tumors,5000\n");
		fprintf(Q142,"No.ticks,11\n");
		fprintf(Q142,"max-age-tam1,10\n");
		fprintf(Q142,"max-age-tam2,10\n");
		fprintf(Q142,"max-age-tan1,10\n");
		fprintf(Q142,"max-age-tan2,10\n");
		fprintf(Q142,"max-age-nk,10\n");
		fprintf(Q142,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q142,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q142,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q142,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q142,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q142);
	
 

	FILE * Q143 = fopen("input_values143.csv","w");
	if(Q143==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q143,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q143,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q143,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q143,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q143,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q143,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q143,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q143,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q143,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q143,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q143,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q143,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q143,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q143,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q143,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q143,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q143,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q143,"max-tumors,5000\n");
		fprintf(Q143,"No.ticks,11\n");
		fprintf(Q143,"max-age-tam1,10\n");
		fprintf(Q143,"max-age-tam2,10\n");
		fprintf(Q143,"max-age-tan1,10\n");
		fprintf(Q143,"max-age-tan2,10\n");
		fprintf(Q143,"max-age-nk,10\n");
		fprintf(Q143,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q143,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q143,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q143,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q143,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q143);
	
 

	FILE * Q144 = fopen("input_values144.csv","w");
	if(Q144==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q144,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q144,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q144,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q144,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q144,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q144,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q144,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q144,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q144,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q144,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q144,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q144,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q144,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q144,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q144,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q144,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q144,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q144,"max-tumors,5000\n");
		fprintf(Q144,"No.ticks,11\n");
		fprintf(Q144,"max-age-tam1,10\n");
		fprintf(Q144,"max-age-tam2,10\n");
		fprintf(Q144,"max-age-tan1,10\n");
		fprintf(Q144,"max-age-tan2,10\n");
		fprintf(Q144,"max-age-nk,10\n");
		fprintf(Q144,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q144,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q144,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q144,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q144,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q144);
	
 

	FILE * Q145 = fopen("input_values145.csv","w");
	if(Q145==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q145,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q145,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q145,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q145,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q145,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q145,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q145,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q145,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q145,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q145,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q145,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q145,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q145,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q145,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q145,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q145,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q145,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q145,"max-tumors,5000\n");
		fprintf(Q145,"No.ticks,11\n");
		fprintf(Q145,"max-age-tam1,10\n");
		fprintf(Q145,"max-age-tam2,10\n");
		fprintf(Q145,"max-age-tan1,10\n");
		fprintf(Q145,"max-age-tan2,10\n");
		fprintf(Q145,"max-age-nk,10\n");
		fprintf(Q145,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q145,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q145,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q145,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q145,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q145);
	
 

	FILE * Q146 = fopen("input_values146.csv","w");
	if(Q146==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q146,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q146,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q146,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q146,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q146,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q146,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q146,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q146,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q146,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q146,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q146,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q146,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q146,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q146,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q146,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q146,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q146,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q146,"max-tumors,5000\n");
		fprintf(Q146,"No.ticks,11\n");
		fprintf(Q146,"max-age-tam1,10\n");
		fprintf(Q146,"max-age-tam2,10\n");
		fprintf(Q146,"max-age-tan1,10\n");
		fprintf(Q146,"max-age-tan2,10\n");
		fprintf(Q146,"max-age-nk,10\n");
		fprintf(Q146,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q146,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q146,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q146,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q146,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q146);
	
 

	FILE * Q147 = fopen("input_values147.csv","w");
	if(Q147==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q147,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q147,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q147,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q147,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q147,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q147,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q147,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q147,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q147,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q147,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q147,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q147,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q147,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q147,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q147,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q147,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q147,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q147,"max-tumors,5000\n");
		fprintf(Q147,"No.ticks,11\n");
		fprintf(Q147,"max-age-tam1,10\n");
		fprintf(Q147,"max-age-tam2,10\n");
		fprintf(Q147,"max-age-tan1,10\n");
		fprintf(Q147,"max-age-tan2,10\n");
		fprintf(Q147,"max-age-nk,10\n");
		fprintf(Q147,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q147,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q147,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q147,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q147,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q147);
	
 

	FILE * Q148 = fopen("input_values148.csv","w");
	if(Q148==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q148,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q148,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q148,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q148,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q148,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q148,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q148,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q148,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q148,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q148,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q148,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q148,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q148,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q148,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q148,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q148,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q148,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q148,"max-tumors,5000\n");
		fprintf(Q148,"No.ticks,11\n");
		fprintf(Q148,"max-age-tam1,10\n");
		fprintf(Q148,"max-age-tam2,10\n");
		fprintf(Q148,"max-age-tan1,10\n");
		fprintf(Q148,"max-age-tan2,10\n");
		fprintf(Q148,"max-age-nk,10\n");
		fprintf(Q148,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q148,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q148,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q148,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q148,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q148);
	
 

	FILE * Q149 = fopen("input_values149.csv","w");
	if(Q149==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q149,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q149,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q149,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q149,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q149,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q149,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q149,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q149,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q149,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q149,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q149,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q149,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q149,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q149,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q149,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q149,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q149,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q149,"max-tumors,5000\n");
		fprintf(Q149,"No.ticks,11\n");
		fprintf(Q149,"max-age-tam1,10\n");
		fprintf(Q149,"max-age-tam2,10\n");
		fprintf(Q149,"max-age-tan1,10\n");
		fprintf(Q149,"max-age-tan2,10\n");
		fprintf(Q149,"max-age-nk,10\n");
		fprintf(Q149,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q149,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q149,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q149,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q149,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q149);
	
 

	FILE * Q150 = fopen("input_values150.csv","w");
	if(Q150==NULL)
	{
		perror("Error en la apertura del archivo \n");
		return 1;
	}
	else
	{
		fprintf(Q150,"No.-of-initial-tumor-cells,%i\n",rand() % 34 + 33);
		fprintf(Q150,"No.-of-initial-neutrophils-cell,%i\n",rand() % 34);
		fprintf(Q150,"No.-of-initial-macrophages-cells,%i\n",rand() % 34);
		fprintf(Q150,"No.-of-initial-natural-killers-cells,%i\n",rand() % 34);
		fprintf(Q150,"recruit-neutrophils,%i\n",rand() % 34);
		fprintf(Q150,"ProbOfSuccesOfInterac-NeutTum,%i\n",rand() % 34);
		fprintf(Q150,"ProbOfChange-to-tan1-or-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q150,"ProbOfSuccesOf-tan1,%i\n",rand() % 34);
		fprintf(Q150,"No-of-desactivating-tumor-cells-by-tan1,%i\n",rand() % 34);
		fprintf(Q150,"ProbOfSuccesOf-tam1,%i\n",rand() % 34);
		fprintf(Q150,"recruit-macrophages,%i\n",rand() % 34);
		fprintf(Q150,"ProbOfSuccesOfInterac-MacrTum,%i\n",rand() % 34);
		fprintf(Q150,"ProbOfChange-to-tam1-or-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q150,"recruit-natural-killers,%i\n",rand() % 34);
		fprintf(Q150,"ProbOfSAttackSuccesByNk,%i\n",rand() % 34 + 33);
		fprintf(Q150,"No-of-activating-tumor-cells-by-tan2,%i\n",rand() % 34 + 33);
		fprintf(Q150,"No-of-activating-tumor-cells-by-tam2,%i\n",rand() % 34 + 33);
		fprintf(Q150,"max-tumors,5000\n");
		fprintf(Q150,"No.ticks,11\n");
		fprintf(Q150,"max-age-tam1,10\n");
		fprintf(Q150,"max-age-tam2,10\n");
		fprintf(Q150,"max-age-tan1,10\n");
		fprintf(Q150,"max-age-tan2,10\n");
		fprintf(Q150,"max-age-nk,10\n");
		fprintf(Q150,"No.-of-initial-treg-cells,%i\n",rand() % 34);
		fprintf(Q150,"No.-of-initial-helper-cells,%i\n",rand() % 34);
		fprintf(Q150,"ProbOfSuccesOfInterac-Th-Tum,%i\n",rand() % 34);
		fprintf(Q150,"ProbOfChange-thcells-to-thcells-,%i\n",rand() % 34);
		fprintf(Q150,"ProbOfAttackSuccesByCd8,%i\n",rand() % 34 + 33);
	}
	fclose(Q150);
	return 0;
}

