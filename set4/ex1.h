#ifndef	EX1_H_
#define EX1_H_
typedef union r
{
	unsigned char variabila;
	struct {
		unsigned char WPS: 1;
		unsigned char WPE: 1;
		unsigned char    : 2;
		unsigned char HYP: 1;
		unsigned char ODE: 1;
		unsigned char DSC: 2;
	} campuri;
}siu_pcr;
void set_campuri_siu_pcr(siu_pcr *p,unsigned char WPS,unsigned char WPE,unsigned char HYP,unsigned char ODE,unsigned DSC);
void afisare_siu_pcr(siu_pcr p);
#endif