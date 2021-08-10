#include "ex3.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void InitBazaDate(Parametru *parametri,unsigned char nr_param)
{
	int i=0;
	char string[15];
	for(i=0;i<nr_param;++i)
	{
		//solutie 1->scalloc+memcpy
		/*parametri[i].param_name=(char*)calloc(15,sizeof(char));
		//printf("%x\n",&parametri[i].param_name);
		memcpy(parametri[i].param_name,"parametru_",10*sizeof(char));
		parametri[i].param_name[10]=i+48;*/
		//solutie 2->malloc+strcpy
		/*parametri[i].param_name=(char*)malloc(15*sizeof(char));
		//printf("%x\n",&parametri[i].param_name);
		//memcpy(parametri[i].param_name,"parametru_",10*sizeof(char));
		strcpy(parametri[i].param_name,"parametru_");
		parametri[i].param_name[10]=i+48;
		parametri[i].param_name[11]='\0';*/
		//solutie 3
		parametri[i].param_name=(char*)malloc(15*sizeof(char));
		sprintf(parametri[i].param_name,"parametru_%c",(i+48));
		//solutie 4
		//parametri[i].param_name=(char*)calloc(15,sizeof(char));
		//strcpy(string,"paramentru ");
		//string[11]=i+48;
		//printf("nume paramentru: ");
		//scanf("%s",string);
		//strcpy(parametri[i].param_name,string);
		switch(i%5)
		{
		case uint8:
			parametri[i].param_type=uint8;
			parametri[i].param_value.UINT8=(unsigned char)i+rand()%nr_param;
			break;
		case uint16:
			parametri[i].param_type=uint16;
			parametri[i].param_value.UINT16=(unsigned short)i+rand()%nr_param;
			break;
		case int32:
			parametri[i].param_type=int32;
			parametri[i].param_value.INT=i+rand()%nr_param;
			break;
		case boolean:
			parametri[i].param_type=boolean;
			parametri[i].param_value.BOOL=(unsigned char)i%2;
			break;
		case ffloat:
			parametri[i].param_type=ffloat;
			parametri[i].param_value.FLOAT=(float)i+rand()%nr_param;
			break;
		}
	}
}

void AfisareBazaDate(Parametru *parametri,unsigned char nr_param)
{
	int i=0;
	for(i=0;i<nr_param;++i)
	{
		printf("parametru\n");
		printf("nume: %s\n",parametri[i].param_name);
		switch(parametri[i].param_type)
		{
		case uint8:
			printf("type: uint8\n");
			printf("value: %d\n",parametri[i].param_value.UINT8);
			break;
		case uint16:
			printf("type: uint16\n");
			printf("value: %d\n",parametri[i].param_value.UINT16);
			break;
		case int32:
			printf("type: int\n");
			printf("value: %d\n",parametri[i].param_value.INT);
			break;
		case boolean:
			printf("type: bool\n");
			printf("value: %d\n",parametri[i].param_value.BOOL);
			break;
		case ffloat:
			printf("type: float\n");
			printf("value: %f\n",parametri[i].param_value.FLOAT);
			break;
		}
	}
}


void swap(Parametru *a,Parametru *b)
{
	Parametru temp=*a;
	*a=*b;
	*b=temp;
}

void bubleSort_value(Parametru *parametri,int n)
{
	int i,j;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		{
			float valuej,valuejj;
			switch(parametri[j].param_type)
			{
			case uint8:
				valuej=parametri[j].param_value.UINT8;
				break;
			case uint16:
				valuej=parametri[j].param_value.UINT16;
				break;
			case int32:
				valuej=parametri[j].param_value.INT;
				break;
			case boolean:
				valuej=parametri[j].param_value.BOOL;
				break;
			case ffloat:
				valuej=parametri[j].param_value.FLOAT;
				break;
			}
			switch(parametri[j+1].param_type)
			{
			case uint8:
				valuejj=parametri[j+1].param_value.UINT8;
				break;
			case uint16:
				valuejj=parametri[j+1].param_value.UINT16;
				break;
			case int32:
				valuejj=parametri[j+1].param_value.INT;
				break;
			case boolean:
				valuejj=parametri[j+1].param_value.BOOL;
				break;
			case ffloat:
				valuejj=parametri[j+1].param_value.FLOAT;
				break;
			}
			if(valuej>valuejj)
			{
				swap((parametri+j),(parametri+j+1));
			}
		}
	}
}

void bubleSort_type(Parametru *parametri,int n)
{
	int i,j;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		{

			if(parametri[j].param_type>parametri[j+1].param_type)
			{
				swap((parametri+j),(parametri+j+1));
			}
		}
	}
}