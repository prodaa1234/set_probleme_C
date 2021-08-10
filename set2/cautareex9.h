#ifndef CAUTAREEX9_H_
#define CAUTAREEX9_H_
#define nr_elem_vec 10
#define varianta_cautare 2 //1 sau 2
#if varianta_cautare==1
int cautare_binara_desc(int *vec,int valoare_cautata);
#endif
#if varianta_cautare==2
int cautare_simpla_desc(int *vec,int valoare_cautate);
#endif
#endif