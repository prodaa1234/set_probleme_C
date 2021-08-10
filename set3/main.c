#include <stdio.h>
#include "Headerex1.h"
#include "Headerex2.h"
#include "Headerex5.h"
#include "matrici.h"
#include "matrici7.h"
#include "binary_search_pointeri.h"
#include "strncpyex4.h"
#define numar_randuri_text 3
#define TRUE 1
#define FALSE 0
void calcul (char *ptablou, long *min, long *max, long *sum);
void check(int numar);
int cauta_cuvant(char **text[],char*cuvant);
char tranf_litere_mici(char c);
void main()
{
	//1
	//unsigned long numar=0x1234567;
	//functie_pointer(&numar);

	//2
	/* unsigned short val=1234;
	unsigned short *FLASH_BIUCR=&val;
	set_FLASH_BIUCR(FLASH_BIUCR,0,0,0,0,0,0,0);
	afisare_FLASH_BIUCR(FLASH_BIUCR);
	set_FLASH_BIUCR(FLASH_BIUCR,7,3,7,3,3,7,1);
	afisare_FLASH_BIUCR(FLASH_BIUCR);
	set_FLASH_BIUCR(FLASH_BIUCR,5,2,5,2,2,5,5);
	afisare_FLASH_BIUCR(FLASH_BIUCR);*/

	//3
	/*char tab[]={0,1,-20,3,4};
	long min=tab[1];
	long max=tab[1];
	long sum=0;
	tab[0]=sizeof(tab)/(sizeof(char));

	calcul(tab,&min,&max,&sum);
	printf("min %d\n",min);
	printf("max %d\n",max);
	printf("sum %d\n",sum);*/

	//4
	char destinatie[15]={'\0'};
	char *sursa="Imi plac merele";
	strncpy(destinatie,sursa,15);
	printf("%s\n",destinatie);
	//problema curs puetre alui 2
	/*check(16);
	check(0);
	check(1);
	check(-32);*/
	//paritate
	/* long numar=4;//11
	char parity=0;
	int i;
	for (i=0;i<32;++i)
	{
		parity=parity^((numar>>i)&1);
	}
	//0->nr impar
	//1->nr par
	printf("%d \n",parity);*/

	//5
	/*int tab[]={0,1,-20,3,4};
	int rez=handler(max,tab,sizeof(tab)/(sizeof(int)));
	printf("rez %d \n",rez);*/

	//6
	/*int** matrice = aloca2d();
	populareMatrice(matrice);
	afisareMatrice(matrice);
	printf("matrice ordonata \n");
	ordonareCrescator(matrice);
	afisareMatrice(matrice);
	free2d(matrice);*/

	//7
	/*int** matrice = aloca2d_cupointeri();
	populareMatrice_cupointeri(matrice);
	afisareMatrice_cupointeri(matrice);
	printf("incrementare matrice \n");
	increment_diag_princip(matrice);
	afisareMatrice_cupointeri(matrice);
	printf("interschimbare matrice \n");
	interschimbare_deasupraDig_CU_dedesubtDig(matrice);
	afisareMatrice_cupointeri(matrice);*/

	//8
	/*char *c1="C is a general purpose programming language initially";
	char *c2="developed by Dennis Ritchie between";
	char *c3="1969 and 1973 at Bell Labs";

	char * text[numar_randuri_text]={c1,c2,c3};

	int ok=-1;
	int i=0,j=0;
	//
	//text2 [0][0]+=32;
	//printf("%c\n",text2[0][0]);
	ok=cauta_cuvant(text,"bell");
	printf("%d\n",ok);*/
	//in plus lab
	//binary_search using pointeri
	/*int v[]={1,7,3,2,1,9,0};
	int i;
	int n=sizeof(v)/sizeof(int);
	bubleSort_bs(v,n);
	for(i=0;i<n;++i)
	{
		printf("%d ",*(v+i));
	}
	printf("\n");
	printf("%d\n",binary_search(v,n,3));*/
}
//exercitiul 3
void calcul (char *ptablou, long *min, long *max, long *sum)
{
	//punem dimensiunea tabloului la inceputul tabloului,dim tablou in care e inclus si primul element cu dim tablou
	int i=1;
	for (i=1;i<ptablou[0];++i)
	{
		if ((*min)>ptablou[i])
		{
			*min=ptablou[i];
		}
		if ((*max)<ptablou[i])
		{
			*max=ptablou[i];
		}
		*sum+=ptablou[i];
	}

}

//functie curs (de verificare daca este putere a lui 2)
void check(int numar)
{
	int i;
	int sum=0;
	for(i=0;i<sizeof(numar)*8;++i)
	{
		sum+=(numar>>i)&1;
	}
	if(sum==1)
	{
		printf("numarul %d este puterea lui 2 \n",numar);
	}
	else
	{
		printf("numarul %d NU este puterea lui 2 \n",numar);
	}
}
//8
int cauta_cuvant(char *text[],char*cuvant)
{
	int i=0,j=0,k=0;
	int inceput_cuvant=0;
	int sfarsit_cuvant=0;
	char flag=0;
	for(i=0;i<numar_randuri_text;++i)
	{
		inceput_cuvant=0;
		sfarsit_cuvant=0;
		j=-1;
		do
		{
			j++;
			//tranforma litere mici (nu merge->matrice de vectori constanti)
			//if((text[i][j] >=65) && (text[i][j]<=90))
			//{
			//	text[i][j]=text[i][j]+(char)32;
			//}
			if((text[i][j]==' ')||(text[i][j]=='\0'))
			{
				sfarsit_cuvant=j;
				for(k=inceput_cuvant;k<sfarsit_cuvant;++k)
				{
					//printf("%c\n",(text[i][k]));
					//printf("%c\n",cuvant[k-inceput_cuvant]);
					if((text[i][k]==cuvant[k-inceput_cuvant]) ||((text[i][k]+32)==cuvant[k-inceput_cuvant])||((text[i][k]-32)==cuvant[k-inceput_cuvant]))
					{
						flag=1;
					}
					else
					{
						flag=0;
						break;
					}
				}
				inceput_cuvant=sfarsit_cuvant+1;
			}

			if(flag==1)
			{
				return TRUE;
			}

		}while(text[i][j]!='\0');
	}
	return FALSE;
}
char tranf_litere_mici(char c)
{
	char lit_mic=c+32;
	return lit_mic;
}