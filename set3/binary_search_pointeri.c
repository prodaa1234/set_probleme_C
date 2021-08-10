#include "binary_search_pointeri.h"
#include "matrici.h"
void bubleSort_bs(int* vec,int n)
{
	int i,j;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		{
			if((*(vec+j))>(*(vec+j+1)))
			{
				swap((vec+j),(vec+j+1));
			}
		}
	}
}
int binary_search(int* vec,int n,int val_cautata)
{
	int i;
	int st=0;
	int dr=n;
	int m;
	int poz=-1;
	while((st<=dr)&&(poz==-1))
	{
		m=(dr+st)/2;
		if(*(vec+m)==val_cautata)
		{
			poz=m;
		}
		if(*(vec+m)>val_cautata)
		{
			dr=m-1;
		}
		if(*(vec+m)<val_cautata)
		{
			st=m+1;
		}
	
	}
	return poz;
}