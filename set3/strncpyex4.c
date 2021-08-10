#include"strncpyex4.h"

void strncpy (char *destinatie, char *sursa, unsigned int n)
{
	int i=0;
	for (i=0;i<n;++i)
	{
		destinatie[i]=sursa[i];
	}
}
