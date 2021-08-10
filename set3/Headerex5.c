#include "Headerex5.h"
int min(int *ptablou, int n)
{
	//punem dimensiunea tabloului la inceputul tabloului,dim tablou in care e inclus si primul element cu dim tablou
	int i=1;
	int min=ptablou[0];
	for (i=1;i<n;++i)
	{
		if (min>ptablou[i])
		{
			min=ptablou[i];
		}
	}
	return min; 
}
int max(int *ptablou,int n)
{
	//punem dimensiunea tabloului la inceputul tabloului,dim tablou in care e inclus si primul element cu dim tablou
	int i=0;
	int max=ptablou[0];
	for (i=1;i<n;++i)
	{
		
		if (max<ptablou[i])
		{
			max=ptablou[i];
		}
	}
	return max;
}
int sum(int *ptablou,int n)
{
	//punem dimensiunea tabloului la inceputul tabloului,dim tablou in care e inclus si primul element cu dim tablou
	int i=0;
	int sum=0;
	for (i=1;i<n;++i)
	{
		sum+=ptablou[i];
	}
	
	return sum;
}
int handler(int (*pf)(int *,int ),int *ptablou,int n)
{
	int rez;
	rez=pf(ptablou,n);
	return rez;
}

