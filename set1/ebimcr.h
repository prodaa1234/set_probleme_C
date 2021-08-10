#ifndef EBIMCR_H_
#define EBIMCR_H_

extern unsigned long int ebimcr;

unsigned char get_DBM();
void set_DBM(unsigned char set_value);

unsigned char get_MDIS();
void set_MDIS(unsigned char set_value);

unsigned char get_EARP();
void set_EARP(unsigned char set_value);

unsigned char get_EARB();
void set_EARB(unsigned char set_value);

unsigned char get_EXTM();
void set_EXTM(unsigned char set_value);

unsigned char get_ACGE();
void set_ACGE(unsigned char set_value);

unsigned char get_SIZE();
void set_SIZE(unsigned char set_value);

unsigned char get_SIZEN();
void set_SIZEN(unsigned char set_value);
#endif