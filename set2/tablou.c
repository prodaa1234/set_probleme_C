#include "tablou.h"
#include <math.h>
#include <stdio.h>
//exercitiul 5
unsigned char isPrime(unsigned int number)
{
		int i;
		int flagPrime=0;
		for(i=2;i<=sqrt((double) number);++i)
		{
			if (number%i==0)
			{
				flagPrime=1;
				break;
			}
		}
		return flagPrime;
}

void sortare_tablouri( int tab[LUNGIME_N])
{
	unsigned char contor_tablou=0;
	unsigned char contor_tabPP=0;
	unsigned char contor_tabNPP=0;
	unsigned char contor_tabNN=0;

	for(contor_tablou=0;contor_tablou<LUNGIME_N;++contor_tablou)
	{
		if(tab[contor_tablou]>=0)  //numere pozitive
		{
			if (isPrime(tab[contor_tablou])) //numere prime
			{
				if(contor_tabPP<LUNGIME_PP)
				{
					tab_nrPrimePozitive[contor_tabPP]=tab[contor_tablou];
					contor_tabPP++;
				}
				else
				{
					printf("break nr prime poitive");
					break;	//iesi din functie daca se umple tabloul cu nr prime pozitive
				}
			}
			else
			{
				if(contor_tabNPP<LUNGIME_NPP)
				{
					tab_nrNonPrimePozitive[contor_tabNPP]=tab[contor_tablou];
					contor_tabNPP++;
				}
				else
				{
					printf("break nr NUprime poitive");
					break;	//iesi din functie daca se umple tabloul cu nr neprime pozitive
				}
			}
		}
		else //numere negative
		{
			if(contor_tabNN<LUNGIME_NN)
			{
				tab_nrNegative[contor_tabNN]=tab[contor_tablou];
				contor_tabNN++;
			}
			else
			{
				printf("break nr negative");
				break;	//iesi din functie daca se umple tabloul cu nr NEGATIVE
			}
		}
	}


}
