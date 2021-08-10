#ifndef TABLOU_H_
#define TABLOU_H_

#define LUNGIME_N 8
#define LUNGIME_PP 4
#define LUNGIME_NPP 2
#define LUNGIME_NN 2

int tab_nrPrimePozitive[LUNGIME_PP]; /* tablou de numere prime pozitive */
int tab_nrNonPrimePozitive[LUNGIME_NPP]; /* tablou de numere pozitive care nu sunt prime */
int tab_nrNegative[LUNGIME_NN]; /* tablou de numere negative */

unsigned char isPrime(unsigned int number);
void sortare_tablouri( int tab[LUNGIME_N]);
#endif