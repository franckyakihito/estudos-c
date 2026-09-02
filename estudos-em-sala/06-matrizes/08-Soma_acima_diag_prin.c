#include <stdio.h>
int SomaAcimaDiagPrin(int matriz[3][3], int grandeza){
    int soma=0;
    for(int i=0; i<grandeza; i++){
        for(int j=0; j<grandeza; j++){
            if(i<j){
                soma+=matriz[i][j];
            }
        }
    }
    return soma;
}

void main(){
    int grandeza=3;
    int matriz[grandeza][grandeza];
    
    for(int i=0; i<grandeza; i++){
        for(int j=0; j<grandeza; j++){
            printf("mat[%i][%i]=", i, j); scanf("%i", &matriz[i][j]);
        }
    }
    printf("Soma dos valores acima da diagonal principal: %i", SomaAcimaDiagPrin(matriz, grandeza));

}
//acima da diagonal principal = sempre que i<j, ou seja, quando a linha for menor que a coluna.
