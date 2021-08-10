#include "setandget.h"
#include <stdio.h>
//exercitiul 3
unsigned char valoare=189;
unsigned char get (unsigned char pozitie)
{
	unsigned char c;
	c=valoare>>pozitie&1;
	return c; 
}
void set (unsigned char pozitie,unsigned char val)
{
	if(val==0)
	{
		valoare=~(1<<pozitie)&valoare;
	}
	if(val==1)
	{
		valoare=(1<<pozitie)|valoare;
	}
	
}