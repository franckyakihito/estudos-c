#include <stdio.h>

void matrizTransposta(int matriz[3][3], int grandeza){
    int matriz_transposta[grandeza][grandeza];

    for(int i=0; i<grandeza; i++){
        for(int j=0; j<grandeza; j++){
            matriz_transposta[j][i]=matriz[i][j];
        }
    }
    printf("Matriz transposta:\n");
    for(int i=0; i<grandeza; i++){
        for(int j=0; j<grandeza; j++){
            printf("%i\t ", matriz_transposta[i][j]);
        }
        printf("\n");
    }

}
void main(){
    int grandeza=3;
    int matriz[grandeza][grandeza];
    int matriz_transposta[grandeza][grandeza];
    
    for(int i=0; i<grandeza; i++){
        for(int j=0; j<grandeza; j++){
            printf("mat[%i][%i]=", i, j); scanf("%i", &matriz[i][j]);
        }
    }
    matrizTransposta(matriz, grandeza); // sem o printf, a funcao e com certeza void pois nao retorna nada, tudo e resolvido dentro dela
}