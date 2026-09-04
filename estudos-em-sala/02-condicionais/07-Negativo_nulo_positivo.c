#include <stdio.h>

int main(){
    int numero;

    printf("Digite o numero que deseja saber se e positivo, nulo ou negativo: ");
    scanf("%i", &numero);

    if(numero>0){
        printf("O numero %i e positivo", numero);    
    }
    else if(numero<0){
        printf("O numero %i e negativo", numero);
    }
    else{
        printf("O numero %i e nulo", numero);
    }
    return 0;
}