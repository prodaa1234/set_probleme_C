#include "matrici.h"
#include <stdlib.h>
#include <stdio.h>
//exercitiul 6
#if cupointeri==0
int** aloca2d()
{
	int** matrice;
	int i;

	matrice = (int **)malloc(N*sizeof(int*));
	for(i=0;i<N;++i)
	{
		matrice[i]=(int *)malloc(M*sizeof(int));
	}

	 return matrice;
}

void populareMatrice(int** matrice)
{
	int i,j;
	for(i=0;i<N;++i)
	{
		for(j=0;j<M;++j)
		{
			matrice[i][j]= rand() % 50;
		}
	}
}

void ordonareCrescator(int** matrice)
{
	int i;
	for(i=0;i<N;++i)
	{
		bubleSort(matrice[i]);
	}
}



void bubleSort(int* linie)
{
	int i,j;
	for (i=0;i<M-1;++i)
	{
		for(j=0;j<M-i-1;++j)
		{
			if(linie[j]>linie[j+1])
			{
				swap(&linie[j],&linie[j+1]);
			}
		}
	}
}

void swap(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void afisareMatrice(int** matrice)
{
	int i,j;
	for(i=0;i<N;++i)
	{
		for(j=0;j<M;++j)
		{
			printf("%d ",matrice[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void free2d(int** matrice)
{
	int i;
	for(i=0;i<N;++i)
	{
		free(matrice[i]);
	}
	free(matrice);
}
#endif

#if cupointeri==1
int** aloca2d()
{
	int** matrice;
	int i;

	matrice = (int **)malloc(N*sizeof(int*));
	for(i=0;i<N;++i)
	{
		*(matrice+i)=(int *)malloc(M*sizeof(int));
	}

	 return matrice;
}

void populareMatrice(int** matrice)
{
	int i,j;
	for(i=0;i<N;++i)
	{
		for(j=0;j<M;++j)
		{
			*((*(matrice+i))+j)= rand() % 50;
		}
	}
}

void ordonareCrescator(int** matrice)
{
	int i;
	for(i=0;i<N;++i)
	{
		bubleSort(*(matrice+i));
	}
}



void bubleSort(int* linie)
{
	int i,j;
	for (i=0;i<M-1;++i)
	{
		for(j=0;j<M-i-1;++j)
		{
			if((*(linie+j))>(*(linie+j+1)))
			{
				swap((linie+j),(linie+j+1));
			}
		}
	}
}

void swap(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void afisareMatrice(int** matrice)
{
	int i,j;
	for(i=0;i<N;++i)
	{
		for(j=0;j<M;++j)
		{
			printf("%d ",*((*(matrice+i))+j));
		}
		printf("\n");
	}
	printf("\n");
}

void free2d(int** matrice)
{
	int i;
	for(i=0;i<N;++i)
	{
		free(*(matrice+i));
	}
	free(matrice);
}
#endif