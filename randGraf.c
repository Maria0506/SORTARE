#define MAX 500
#define lungimeM 10
#include "functii.h"
void randGraf(int matrice_adiacenta[MAX][MAX]){
    int i, j;
    time_t t;
    srand((unsigned)time(&t));

    for(i=0; i < lungimeM; i++){
        for(j=0; j < lungimeM; j++){
            if(i==j){
                continue;
            }
            if(matrice_adiacenta[j][i]==0){
                matrice_adiacenta[i][j]=rand() % 2;
                //Afisare matrice de adiacenta[i][j]);
            }
            if(verificare_cicluri(matrice_adiacenta)==0){
                matrice_adiacenta[i][j]=0;
            }

        }
    }
    for(i=0; i < lungimeM; i++){
        for(j=0; j < lungimeM; j++){
            printf("%d ",matrice_adiacenta[i][j]);
        }
        printf("\n");
    }

}


