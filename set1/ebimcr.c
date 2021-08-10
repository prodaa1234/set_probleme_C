#include "ebimcr.h"

unsigned char get_DBM()
{
	unsigned char pos_DBM=0;
	return ebimcr>>pos_DBM&1; 
}
void set_DBM(unsigned char set_value)
{
	unsigned char pos_DBM=0;
	if(set_value==0)
	{
		ebimcr=~(1<<pos_DBM)&ebimcr;
	}
	if(set_value==1)
	{
		ebimcr=(1<<pos_DBM)|ebimcr;
	}
	
}

unsigned char get_MDIS()
{
	unsigned char pos_MDIS=6;
	return ebimcr>>pos_MDIS&1; 
}
void set_MDIS(unsigned char set_value)
{
	unsigned char pos_MDIS=6;
	if(set_value==0)
	{
		ebimcr=~(1<<pos_MDIS)&ebimcr;
	}
	if(set_value==1)
	{
		ebimcr=(1<<pos_MDIS)|ebimcr;
	}
	
}

unsigned char get_EARP()
{
	unsigned char get_value;
	unsigned char pos_EARP=11;
	get_value=(ebimcr>>pos_EARP&1)+(ebimcr>>(pos_EARP+1)&1)*2;
	return get_value;
}
void set_EARP(unsigned char set_value)
{
	unsigned char pos_EARP=11;
	int i=0;
	for(i=0;i<2;i++)
	{
		if(set_value%2==0)
		{
			ebimcr=~(1<<(pos_EARP+i))&ebimcr;
		}
		if(set_value%2==1)
		{
			ebimcr=(1<<(pos_EARP+i))|ebimcr;
		}
		set_value/=2;
	}
}

unsigned char get_EARB()
{
	unsigned char pos_EARB=13;
	return ebimcr>>pos_EARB&1; 
}
void set_EARB(unsigned char set_value)
{
	unsigned char pos_EARB=13;
	if(set_value==0)
	{
		ebimcr=~(1<<pos_EARB)&ebimcr;
	}
	if(set_value==1)
	{
		ebimcr=(1<<pos_EARB)|ebimcr;
	}
}

unsigned char get_EXTM()
{
	unsigned char pos_EXTM=14;
	return ebimcr>>pos_EXTM&1; 
}
void set_EXTM(unsigned char set_value)
{
	unsigned char pos_EXTM=14;
	if(set_value==0)
	{
		ebimcr=~(1<<pos_EXTM)&ebimcr;
	}
	if(set_value==1)
	{
		ebimcr=(1<<pos_EXTM)|ebimcr;
	}
}

unsigned char get_ACGE()
{
	unsigned char pos_ACGE=15;
	return ebimcr>>pos_ACGE&1; 
}
void set_ACGE(unsigned char set_value)
{
	unsigned char pos_ACGE=15;
	if(set_value==0)
	{
		ebimcr=~(1<<pos_ACGE)&ebimcr;
	}
	if(set_value==1)
	{
		ebimcr=(1<<pos_ACGE)|ebimcr;
	}
}


unsigned char get_SIZE()
{
	unsigned char get_value;
	unsigned char pos_SIZE=24;
	get_value=(ebimcr>>pos_SIZE&1)+(ebimcr>>(pos_SIZE+1)&1)*2;
	return get_value;
}
void set_SIZE(unsigned char set_value)
{
	unsigned char pos_SIZE=24;
	int i=0;
	for(i=0;i<2;i++)
	{
		if(set_value%2==0)
		{
			ebimcr=~(1<<(pos_SIZE+i))&ebimcr;
		}
		if(set_value%2==1)
		{
			ebimcr=(1<<(pos_SIZE+i))|ebimcr;
		}
		set_value/=2;
	}
}

unsigned char get_SIZEN()
{
	unsigned char pos_SIZEN=26;
	return ebimcr>>pos_SIZEN&1; 
}
void set_SIZEN(unsigned char set_value)
{
	unsigned char pos_SIZEN=26;
	if(set_value==0)
	{
		ebimcr=~(1<<pos_SIZEN)&ebimcr;
	}
	if(set_value==1)
	{
		ebimcr=(1<<pos_SIZEN)|ebimcr;
	}
}