#ifndef	EX3_H_
#define EX3_H_
typedef enum {uint8 ,uint16 ,int32 ,boolean,ffloat} type;

typedef union{
	unsigned char UINT8:8;
	unsigned short UINT16:16;
	int INT:32;
	unsigned char BOOL:1;
	float FLOAT;
} value;


typedef struct{
	char *param_name;
	type param_type;
	value param_value;
} Parametru;

void InitBazaDate(Parametru *parametri,unsigned char nr_param);
void AfisareBazaDate(Parametru *parametri,unsigned char nr_param);
void bubleSort_type(Parametru *parametri,int n);
void swap(Parametru *a,Parametru *b);
void bubleSort_value(Parametru *parametri,int n);
#endif