#include <stdio.h>
#include "bitoperation.h"
#include "function2.h"
#include "setandget.h"
#include "rigthrotation.h"
#include "ebimcr.h"
#include "emiosccr.h"
#include "staticex10.h"

void functie1();
void functie2();

unsigned long int ebimcr=0;
extern unsigned char valoare;
unsigned long int nr= 0x300C00FF;
unsigned short int emiosccr=0;

int main()
{
	unsigned char var=131;
	unsigned char val=1;
	unsigned char val_get;
	unsigned char n=4;
	//9
	/*char sc=130;
	unsigned char uc=300;
	short int ss=-0xf001;
	unsigned short us=0xfffff;
	long sl=0xf0000001;
	unsigned long ul=0x100000000;*/
	//1
	//afiseaza_biti_impartire(var);
	//printf("\n");
	//afiseaza_biti_pebiti(var);
	//2
	/*val=f(val);
	val=f(val);
	val=f(val);
	val=f(val);
	val=f(val);
	val=f(val); */
	//3
	//val_get=get(3);
	//printf("%d \n",val_get);
	//printf("%d \n",valoare);
	//set(3,0);
	//printf("%d",valoare);
	//4
	//a=9;
	//printf("%x \n",nr);
	//rigthrot(nr,  n);
	//printf("%x \n",nr);
	//5
	/*set_DBM(1);
	set_MDIS(1);
	set_EARP(3);
	set_EARB(1);
	set_EXTM(1);
	set_ACGE(1);
	set_SIZE(2);
	set_SIZEN(1);
	printf("%x \n",ebimcr);

	printf("%d \n",get_DBM());
	printf("%d \n",get_SIZE()); */
	//6
	set_IF(15);
	printf("%x \n",emiosccr);
	printf("%d \n", get_IF());
	//9
	/*
	printf("%d \n",sc);
	printf("%d \n",uc);
	printf("%d \n",ss);
	printf("%x \n",us);
	printf("%d \n",sl);
	printf("%x \n",ul);*/
	//10
	/*functie1();
	functie2();
	st+=1;
	fst+=1;*/
	//11
	/*unsigned char a;
	signed char b,c;
	b=10;
	c=0;
	a=255;
	c=~a-b++;
	printf("%d \n",c);*/
	return 0;

}

void functie1()
{
	static char st=1;
	char fst=1;
	st+=1;
	fst+=1;	
}
void functie2()
{
//	st+=1;
	//fst+=1;	
}
