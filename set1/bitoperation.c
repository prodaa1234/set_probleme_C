#include "bitoperation.h"
#include<stdio.h>
///exercitiul 1 (prin 2 metode)
void afiseaza_biti_impartire(unsigned char nr)
{
	char c;
	int i;
	int aux=0;
	int p=1;
	for(i=0;i<=7;i++)
	{
		c=nr%2;
		nr=nr/2;
		aux=aux+c*p;
		p=p*10;
	}
	printf("%d",aux);

}

void afiseaza_biti_pebiti(unsigned char nr)
{
	char c;
	int i;
	for (i=7;i>=0;i--)
	{
		c=nr>>i&1;
		printf("%d",c);
	}
}