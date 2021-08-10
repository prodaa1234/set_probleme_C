#include "cautareex9.h"
#include <stdio.h>
#if varianta_cautare==1
int cautare_binara_desc(int *vec,int valoare_cautata)
{
	int st=0;
	int dr=nr_elem_vec-1;
	int poz=-1;
	int m=0;
	printf("dr %d\n",dr);
	while ((st<=dr)&&( poz==-1))
	{
		m=(st+dr)/2;
		if (vec[m]==valoare_cautata)
		{
			poz=m;
		}
		else
		{
			if (vec[m]>valoare_cautata)
			{
				st=m+1;
			}
			else
			{
				dr=m-1;
			}
		}
	}
	if (poz!=-1)
	{
		return poz;
	}
	else
	{
		printf("valoarea nu apare in vector \n");
		return -1;
	}
}
#endif
#if varianta_cautare==2
int cautare_simpla_desc(int *vec,int valoare_cautate)
{
	int i=0;
	for (i=0;i<nr_elem_vec;++i)
	{
		if (vec[i]==valoare_cautate)
		{
			return i;
		}
	
	}
	printf("valoarea nu apare in vector \n");
	return -1; 
}
#endif