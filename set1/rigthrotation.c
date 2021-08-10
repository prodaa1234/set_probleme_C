#include "rigthrotation.h"
#include <stdio.h>

//exercitiul 4
/*void rigthrot(unsigned long int a, unsigned char n)
{
	unsigned long int aux=0;
	aux=a<<(32-n);
	a=a>>n;
	nr=a|aux;
}
*/
void rigthrot(unsigned long int a, unsigned char n)
{
	unsigned long int mask=0;
	unsigned long int aux=0;
	mask=~(1<<n);
	aux=(a&mask)<<(32-n);
	a=a>>n;
	nr=a|aux;
	
}