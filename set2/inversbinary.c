#include "inversbinary.h"
#include <stdio.h>
#include <math.h>
//exercitul 3
void inverse_binary(unsigned long number)
{
	unsigned long invers=0;
	int size=sizeof(number)*8-1;
	unsigned long p;
	int i=0;
	p=pow(2.,size);
	printf("%lu\n",size);
	printf("%lu\n",p);
	printf("%lu \n",number);
	for(i=0;i<=size;++i)
	{
		invers+=(number%2)*p;
		p=p/2;
		number/=2;
	}
	number=invers;
	printf("%lu \n",number);
}
//afisare main