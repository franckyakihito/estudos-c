#include <stdio.h>

int contaMaioresDez(int matriz[3][3], int grandeza){
int contador=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(matriz[i][j]>10){
                contador++;
            }
        }
    }
    return contador;
}

void main(){
    int grandeza=3;
    int matriz[grandeza][grandeza];

    for(int i=0; i<grandeza; i++){
        for(int j=0; j<grandeza; j++){
            printf("mat[%i][%i]=", i, j); scanf("%i", &matriz[i][j]);
        }
    }
    printf("Valores>10: %i", contaMaioresDez(matriz, grandeza));
}

void main(){
    int grandeza=3;

    int matriz[grandeza][grandeza];

    for(int i=0; i<grandeza; i++){
        for(int j=0; j<grandeza; j++){
            printf("mat[%i][%i]=", i, j); scanf("%i", &matriz[i][j]);
        }
    }
    printf("Valores>10: %i", contaMaioresDez(matriz, grandeza));

}