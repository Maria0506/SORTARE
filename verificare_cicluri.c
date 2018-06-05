#define MAX 500
#define lungimeM 10
int verificare_cicluri(int matrice_adiacenta[MAX][MAX]){
    int i, j, nr=lungimeM;
    int grad_int, ok, aux[MAX][MAX], flag[MAX];

    for(i=0; i < lungimeM; i++){
        for(j=0; j < lungimeM; j++){
            aux[i][j] = matrice_adiacenta[i][j];
        }
    }

    for(i=0; i < lungimeM; i++)
        flag[i]=0;
    //Afisare sortare topologica
    while(nr!=0){
        ok=0;
        for(i=0; i < lungimeM; i++){
            grad_int=0;
            if(flag[i]==0){
                for(j=0; j < lungimeM; j++){
                   grad_int+=aux[j][i];
                }
                if(grad_int==0){
                    ok=1;
                    //printf("%d",ok);
                    flag[i]=1;
                    //printf("%d ",i+1);
                    nr--;
                    for(j=0; j < lungimeM; j++)
                        aux[i][j]=0;
                }
            }

        }

        if(ok==0) return 0;
    }
    return 1;

}
