#include <stdio.h>
#include <stdlib.h>
#include "functii.h"
#define MAX 500
#define lungimeM 10
time_t t;
int matrice_adiacenta[MAX][MAX];
int main()
{
    verificare_cicluri(matrice_adiacenta);
    randGraf(matrice_adiacenta);
    sortare_topologica(matrice_adiacenta);
    return 0;
}
