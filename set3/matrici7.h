#ifndef MATRICI7_H_
#define MATRICI7_H_
#define N 3
int** aloca2d_cupointeri();
void populareMatrice_cupointeri(int** matrice);
void afisareMatrice_cupointeri(int** matrice);
void free2d_cupoineri(int** matrice);
void increment_diag_princip(int **matrice);
void interschimbare_deasupraDig_CU_dedesubtDig(int** matrice);
void swap_cupointeri(int* a,int* b);
#endif
