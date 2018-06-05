#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#define MAX 500
#define lungimeM 10

#include<stdio.h>
#include <stdlib.h>
 void sortare_topologica(int matrice_adiacenta[MAX][MAX]);
 void randGraf(int matrice_adiacenta[MAX][MAX]);
 int verificare_cicluri(int matrice_adiacenta[MAX][MAX]);
#endif
