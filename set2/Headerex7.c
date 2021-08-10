#include "Headerex7.h"
void ascii_to_tablou(unsigned long nr, unsigned short *vec)
{
	int i=0;
	unsigned char numar;
	for (i=0;i<max_numers_ulong;++i)
	{
		numar=nr%10;
		nr/=10;
		vec[i]=0x30+numar;
	}
}