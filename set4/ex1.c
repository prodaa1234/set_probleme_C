#include "ex1.h"
#include <stdio.h>
void set_campuri_siu_pcr(siu_pcr *p,unsigned char WPS,unsigned char WPE,unsigned char HYP,unsigned char ODE,unsigned DSC)
{
	p->campuri.WPS=WPS;
	p->campuri.WPE=WPE;
	p->campuri.HYP=HYP;
	p->campuri.ODE=ODE;
	p->campuri.DSC=DSC;
}
void afisare_siu_pcr(siu_pcr p)
{
	printf("SIU_PCR: %d \n",p.variabila);
	printf("campuri LSB->MSB: %d %d %d %d %d %d %d %d\n",p.campuri.WPS,p.campuri.WPE,(p.variabila>>2)&1,(p.variabila>>3)&1,p.campuri.HYP,p.campuri.ODE,p.campuri.DSC&1,(p.campuri.DSC>>1)&1);
}