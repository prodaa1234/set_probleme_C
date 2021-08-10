#include "convertbinary.h"
#include <stdio.h>
//exercitiul 1
void convert_to_binary(unsigned long number)
{
	unsigned char vec[32];
	unsigned char bit=0;
	int i=0;
	int counter_zero=0;
	int counter_one=0;
	for (i=0;i<sizeof(number)*8;++i)
	{
		bit=number%2;
		//printf("%d \n",number%2);
		vec[i]=bit;
		if(bit==0)
		{
			counter_zero++;
		}
		else
		{
			counter_one++;
		}
		number/=2;
	}
	//printf("%d \n",counter_zero);
}