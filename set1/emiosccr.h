#ifndef EMIOSCCR_H_
#define EMIOSCCR_H_

extern unsigned short int emiosccr;

unsigned char get_bit (unsigned char pozitie);
void set_bit (unsigned char pozitie,unsigned char val);


unsigned char get_FEN();
void set_FEN (unsigned char val);

unsigned char get_FCK();
void set_FCK (unsigned char val);

unsigned char get_IF();
void set_IF(unsigned char val);

unsigned char get_DMA();
void set_DMA (unsigned char val);

unsigned char get_UCPREN();
void set_UCPREN (unsigned char val);

unsigned char get_UCPRE();
void set_UCPRE(unsigned char val);

unsigned char get_ODISSL();
void set_ODISSL (unsigned char val);

unsigned char get_ODIS();
void set_ODIS(unsigned char val);

unsigned char get_FREN();
void set_FREN (unsigned char val);
#endif