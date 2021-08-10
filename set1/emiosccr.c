#include "emiosccr.h"

unsigned char get_bit (unsigned char pozitie)
{
	unsigned char c;
	c=emiosccr>>pozitie&1;
	return c; 
}
void set_bit (unsigned char pozitie,unsigned char val)
{
	
	emiosccr=~(1<<pozitie)&emiosccr|(val<<pozitie);	
}

unsigned char get_FEN()
{
	return get_bit(1);
}
void set_FEN (unsigned char val)
{
	set_bit(1,val);
}
unsigned char get_FCK()
{
	return get_bit(2);
}
void set_FCK (unsigned char val)
{
	set_bit(2,val);
}

unsigned char get_IF()
{
	unsigned char get_value=0;
	unsigned char pos_IF=3;
	unsigned char p=1;
	int i=0;
	for(i=0;i<4;i++)
	{
		get_value+=get_bit(pos_IF+i)*p;
		p*=2;
	}
	return get_value;
}
void set_IF(unsigned char val)
{
	unsigned char pos_IF=3;
	int i=0;
	for(i=0;i<4;i++)
	{
		set_bit(pos_IF+i,val%2);
		val/=2;
	}
}

unsigned char get_DMA()
{
	return get_bit(8);
}
void set_DMA (unsigned char val)
{
	set_bit(8,val);
}

unsigned char get_UCPREN()
{
	return get_bit(9);
}
void set_UCPREN (unsigned char val)
{
	set_bit(9,val);
}

unsigned char get_UCPRE()
{
	unsigned char get_value;
	unsigned char pos_UCPRE=10;
	unsigned char p=1;
	int i=0;
	for(i=0;i<4;i++)
	{
		get_value+=get_bit(pos_UCPRE+i)*p;
		p*=2;
	}
	return get_value;
}
void set_UCPRE(unsigned char val)
{
	unsigned char pos_UCPRE=10;
	int i=0;
	for(i=0;i<2;i++)
	{
		set_bit(pos_UCPRE+i,val%2);
		val/=2;
	}
}

unsigned char get_ODISSL()
	{
	unsigned char get_value;
	unsigned char pos_ODISSL=12;
	unsigned char p=1;
	int i=0;
	for(i=0;i<4;i++)
	{
		get_value+=get_bit(pos_ODISSL+i)*p;
		p*=2;
	}
	return get_value;
}
void set_ODISSL (unsigned char val)
{
	unsigned char pos_ODISSL=12;
	int i=0;
	for(i=0;i<2;i++)
	{
		set_bit(pos_ODISSL+i,val%2);
		val/=2;
	}
}


unsigned char get_ODIS()
{
	return get_bit(14);

}
void set_ODIS(unsigned char val)
{
	set_bit(14,val);
}

unsigned char get_FREN()
{
	return get_bit(15);
}
void set_FREN (unsigned char val)
{
	set_bit(15,val);
}
