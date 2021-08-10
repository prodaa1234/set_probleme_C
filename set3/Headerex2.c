#include "Headerex2.h"
#include <stdio.h>

void set_PFLIM(unsigned short *FLASH_BIUCR,unsigned char PFLIM)
{
	unsigned char pos_PFLIM=1;
	int i=0;
	for(i=0;i<3;i++)
	{
		*FLASH_BIUCR=~(1<<(pos_PFLIM+i))&(*FLASH_BIUCR)|((PFLIM%2)<<(pos_PFLIM+i));	
		PFLIM/=2;
	} 
}
void set_IPFEN(unsigned short *FLASH_BIUCR,unsigned char IPFEN)
{
	unsigned char pos_IPFEN=4;
	int i=0;
	for(i=0;i<2;i++)
	{
		*FLASH_BIUCR=~(1<<(pos_IPFEN+i))&(*FLASH_BIUCR)|((IPFEN%2)<<(pos_IPFEN+i));	
		IPFEN/=2;
	}
}
void set_DPFEN(unsigned short *FLASH_BIUCR,unsigned char DPFEN)
{
	unsigned char pos_DPFEN=6;
	int i=0;
	for(i=0;i<2;i++)
	{
		*FLASH_BIUCR=~(1<<(pos_DPFEN+i))&(*FLASH_BIUCR)|((DPFEN%2)<<(pos_DPFEN+i));	
		DPFEN/=2;
	}
}
void set_RWSC(unsigned short *FLASH_BIUCR,unsigned char RWSC)
{
	unsigned char pos_RWSC=8;
	int i=0;
	for(i=0;i<3;i++)
	{
		*FLASH_BIUCR=~(1<<(pos_RWSC+i))&(*FLASH_BIUCR)|((RWSC%2)<<(pos_RWSC+i));	
		RWSC/=2;
	}
}
void set_WWSC(unsigned short *FLASH_BIUCR,unsigned char WWSC)
{
	unsigned char pos_WWSC=11;
	int i=0;
	for(i=0;i<2;i++)
	{
		*FLASH_BIUCR=~(1<<(pos_WWSC+i))&(*FLASH_BIUCR)|((WWSC%2)<<(pos_WWSC+i));	
		WWSC/=2;
	}
}
void set_APC(unsigned short *FLASH_BIUCR,unsigned char APC)
{
	unsigned char pos_APC=13;
	int i=0;
	for(i=0;i<3;i++)
	{
		*FLASH_BIUCR=~(1<<(pos_APC+i))&(*FLASH_BIUCR)|((APC%2)<<(pos_APC+i));	
		APC/=2;
	}
}
void set_FLASH_BIUCR(unsigned short *FLASH_BIUCR,unsigned char APC,unsigned char WWSC,unsigned char RWSC,unsigned char DPFEN,unsigned char IPFEN,unsigned char PFLIM,unsigned char BFEN)
{
	unsigned char pos_BFEN=0;
	*FLASH_BIUCR=~(1<<pos_BFEN)&(*FLASH_BIUCR)|(BFEN<<pos_BFEN);
	set_PFLIM(FLASH_BIUCR,PFLIM);
	set_IPFEN(FLASH_BIUCR, IPFEN);
	set_DPFEN(FLASH_BIUCR, DPFEN);
	set_RWSC(FLASH_BIUCR,RWSC);
	set_WWSC(FLASH_BIUCR,WWSC);
	set_APC(FLASH_BIUCR,APC);
}

void afisare_FLASH_BIUCR(unsigned short *FLASH_BIUCR)
{
	printf("FLASH_BIUCR hexa 0x%x \n",*FLASH_BIUCR);
	printf("FLASH_BIUCR us %d \n",*FLASH_BIUCR);
}