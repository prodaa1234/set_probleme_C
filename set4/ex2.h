#ifndef	EX2_H_
#define EX2_H_

#define NR_PORT 3

typedef enum MyEnum {Normal,SC_la_masa, SC_la_baterie} states;

typedef struct{
	unsigned char In;
	unsigned char Out;
	states current_state;
} Port;

void states_simulation(Port *p,int nr_sim);
void from_Normal_to_X(Port* p);
void from_SC_la_masa_to_X(Port *p);
void from_SC_la_baterie_to_X(Port* p);

void states_simulation_ports(Port *p,int nr_sim);
#endif