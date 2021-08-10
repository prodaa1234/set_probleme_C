#include "ex2.h"
#include <stdio.h>
#include <stdlib.h>
void states_simulation(Port *p,int nr_sim)
{
	int i=0;
	while(i<nr_sim)
	{
		printf("IN: %d\n",p->In);
		printf("OUT: %d\n",p->Out);
		printf("stare: %d\n",p->current_state);
		switch (p->current_state)
		{
		case Normal:
			from_Normal_to_X(p);
			break;
		case SC_la_masa:
			from_SC_la_masa_to_X(p);
			break;
		case SC_la_baterie:
			from_SC_la_baterie_to_X(p);
			break;
		}
		p->In=rand()%2;
		p->Out=rand()%2;
		i++;
	}
}

void states_simulation_ports(Port *p,int nr_sim)
{
	int i=0,j=0;
	while(i<nr_sim)
	{
		for(j=0;j<NR_PORT;++j)
		{
			printf("port\': %d\n",j);
			printf("IN: %d\n",p[j].In);
			printf("OUT: %d\n",p[j].Out);
			printf("stare: %d\n",p[j].current_state);
			printf("\n");
			switch (p[j].current_state)
			{
			case Normal:
				from_Normal_to_X(&p[j]);
				break;
			case SC_la_masa:
				from_SC_la_masa_to_X(&p[j]);
				break;
			case SC_la_baterie:
				from_SC_la_baterie_to_X(&p[j]);
				break;
			}
			p[j].In=rand()%2;
			p[j].Out=rand()%2;
		}
		i++;
	}
}



void from_Normal_to_X(Port* p)
{
	if ((p->In==0) && (p->Out==1))
	{
		p->current_state=SC_la_masa;
	}
	if ((p->In==1) && (p->Out==0))
	{
		p->current_state=SC_la_baterie;
	}
}
void from_SC_la_masa_to_X(Port *p)
{
	if ((p->In==1) && (p->Out==1))
	{
		p->current_state=Normal;
	}
	if ((p->In==1) && (p->Out==0))
	{
		p->current_state=SC_la_baterie;
	}
}
void from_SC_la_baterie_to_X(Port *p)
{
	if ((p->In==0) && (p->Out==1))
	{
		p->current_state=SC_la_masa;
	}
	if ((p->In==0) && (p->Out==0))
	{
		p->current_state=Normal;
	}
}