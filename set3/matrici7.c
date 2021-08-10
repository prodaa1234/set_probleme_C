#include "matrici7.h"
#include <stdlib.h>
#include <stdio.h>
//exercitiul 7
int** aloca2d_cupointeri()
{
	int** matrice;
	int i;

	matrice = (int **)malloc(N*sizeof(int*));
	for(i=0;i<N;++i)
	{
		*(matrice+i)=(int *)malloc(N*sizeof(int));
	}

	 return matrice;
}

void populareMatrice_cupointeri(int** matrice)
{
	int i,j;
	for(i=0;i<N;++i)
	{
		for(j=0;j<N;++j)
		{
			*((*(matrice+i))+j)= rand() % 50;
		}
	}
}
void afisareMatrice_cupointeri(int** matrice)
{
	int i,j;
	for(i=0;i<N;++i)
	{
		for(j=0;j<N;++j)
		{
			printf("%d ",*((*(matrice+i))+j));
		}
		printf("\n");
	}
	printf("\n");
}

void free2d_cupointeri(int** matrice)
{
	int i;
	for(i=0;i<N;++i)
	{
		free(*(matrice+i));
	}
	free(matrice);
}

void increment_diag_princip(int **matrice)
{
	int j;
	for(j=0;j<N;++j)
	{
		(*((*(matrice+j))+j))++;
	}
}
void swap_cupointeri(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void interschimbare_deasupraDig_CU_dedesubtDig(int** matrice)
{
	int i,j;
	for(i=0;i<N;++i)
	{
		for(j=i+1;j<N;++j)
		{
			swap_cupointeri(((*(matrice+i))+j), ((*(matrice+j))+i));
		}
	}

}