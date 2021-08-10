#include "fibonaciiex8.h"
int element_sir_fibonacci(int nr_elem)
{
	int el1=0,el2=1,el3;
	int i;
	if (nr_elem==1)
	{
		return el1;
	}
	if (nr_elem==2)
	{
		return el2;
	}
	for (i=3;i<=nr_elem;++i)
	{
		el3=el1+el2;
		el1=el2;
		el2=el3;
	}
	return el3;
}
