#include "Headerex1.h"
#include <stdio.h>
void functie_pointer(unsigned long* var)
{
	unsigned char *q;
	int i=0;
	q=(unsigned char *)var;

	printf("numarul %x \n",*var);
	for (i=0;i<4;++i)
	{
		printf("nr pe octeti %x \n",*q);
		q+=1; 
	}
}