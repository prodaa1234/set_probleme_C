#ifndef MATRICI_H_
#define MATRICI_H_

#define N 3
#define M 3
#define cupointeri 1 //0-functii cu operatori []    1-functii cu pointeri
int** aloca2d();
void populareMatrice(int** matrice);
void ordonareCrescator(int** matrice);
void afisareMatrice(int** matrice);
void bubleSort(int** matrice);
void swap(int* a,int* b);
void free2d(int** matrice);

#endif