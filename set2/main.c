#include <stdio.h>
#include "convertbinary.h"
#include "inversbinary.h"
#include <math.h>
#include "main.h"
#include "tablou.h"
#include "Headerex7.h"
#include "fibonaciiex8.h"
#include"cautareex9.h"
int functie_poz_valIntervale(unsigned long valViteza,unsigned long *tablou);
#define my_number 0xFA48
//exercitiul 2
#define setbit(pozBit,var) ((1<<(pozBit))|(var))
#define clearbit(pozBit,var) (~(1<<(pozBit))&(var))

//extern int tab_nrPrimePozitive[LUNGIME_PP]; /* tablou de numere prime pozitive */
//extern int tab_nrNonPrimePozitive[LUNGIME_NPP]; /* tablou de numere pozitive care nu sunt prime */
//extern int tab_nrNegative[LUNGIME_NN]; /* tablou de numere negative */

void main()
{
	
	//1
	//convert_to_binary(my_number);
	//2
	/*unsigned char nr=0;
	nr=setbit(1+4,my_number+5);
	printf("%d\n",nr);
	nr=clearbit(1+4,nr+5);
	printf("%d\n",nr);*/
	//3
	//inverse_binary(1);
	//4
	printf("pozitia valVitez %d\n",functie_poz_valIntervale(190,tablouIntervale));
	//5
	/*int tablou_numere[LUNGIME_N]={1, 2, 10, 8, -9,-4, 6, 4};
	int i;
	sortare_tablouri(tablou_numere);
	for (i=0;i<LUNGIME_PP;++i)
	{
		printf("%d \n",tab_nrPrimePozitive[i]);
	}
	printf("\n");
	for (i=0;i<LUNGIME_NPP;++i)
	{
		printf("%d \n",tab_nrNonPrimePozitive[i]);
	}
	printf("\n");
	for (i=0;i<LUNGIME_NN;++i)
	{
		printf("%d \n",tab_nrNegative[i]);
	}
	printf("\n");*/
	//7
	/*unsigned long nr=90;
	unsigned short vec[max_numers_ulong];
	int i=0;
	ascii_to_tablou(nr,vec);
	for(i=0;i<max_numers_ulong;++i)
	{
		printf("0x%x \n",*(vec+i));
	}*/
	//8
	//printf("%d \n",element_sir_fibonacci(22));
	//9
	/*int vec[nr_elem_vec]={10,9,8,7,6,5,4,3,2,1};
	int val_caut=7;
	#if varianta_cautare==1 
	printf("poz val caut %d \n",cautare_binara_desc(vec,val_caut));
	#endif
	#if varianta_cautare==2
	printf("poz val caut %d \n",cautare_simpla_desc(vec,val_caut));
	#endif*/
}

//exercitiul 4
int functie_poz_valIntervale(unsigned long valViteza,unsigned long *tablou)
{
	int i=0;
	if (valViteza<tablou[0])
	{
		return 0;
	}
	for (i=0;i<LUNGIME_TABLOU;++i)
	{
		if (valViteza>=tablou[i] && valViteza<tablou[i+1])
		{
			return ++i;
		}
	}
	if (valViteza>=tablou[LUNGIME_TABLOU-1])
	{
		return 7;
	}

}