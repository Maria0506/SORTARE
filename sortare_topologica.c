#define MAX 500
#define lungimeM 10
void sortare_topologica(int matrice_adiacenta[MAX][MAX]){
    int i, j, nr=lungimeM, grad_int, flag2[MAX];
    for(i=0; i < lungimeM; i++)
        flag2[i]=0;
    printf("Sortarea topologica este: ");
    while(nr!=0){
        for(i=0; i < lungimeM; i++){
            grad_int=0;
            if(flag2[i]==0){
                for(j=0; j < lungimeM; j++){
                   grad_int+=matrice_adiacenta[j][i];
                }
                if(grad_int==0){
                    flag2[i]=1;
                    printf("%d ", i+1);
                    nr--;
                    for(j=0; j < lungimeM; j++)
                        matrice_adiacenta[i][j]=0;
                }
            }

        }

    }

    printf("\n");
}

