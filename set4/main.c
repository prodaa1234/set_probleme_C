#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
void main()
{
	//1
	/*siu_pcr reg;
	printf("%x \n",&reg);
	reg.variabila=0;
	afisare_siu_pcr(reg);
	set_campuri_siu_pcr(&reg,1,1,1,1,3);
	afisare_siu_pcr(reg);*/
	//2
	//Port p={rand()%2,rand()%2,Normal};
	//Port vec_port[NR_PORT]={{rand()%2,rand()%2,Normal},{rand()%2,rand()%2,Normal},{rand()%2,rand()%2,Normal}};
	//states_simulation(&p,4);
	//states_simulation_ports(vec_port,4);
	//3
	unsigned char nr_parametri=6;
	Parametru *param=(Parametru *)malloc(nr_parametri*sizeof(Parametru));
	InitBazaDate(param,nr_parametri);
	AfisareBazaDate(param,nr_parametri);
	printf("\nsortare type\n\n");
	bubleSort_type(param,nr_parametri);
	AfisareBazaDate(param,nr_parametri);
	printf("\nsortare value\n\n");
	bubleSort_value(param,nr_parametri);
	AfisareBazaDate(param,nr_parametri);
}