#include <stdio.h>

int main(){
    int numero_1, numero_2;

    printf("Digite os numeros que deseja saber qual o maior e o menor: ");
    scanf("%i %i", &numero_1, &numero_2);

    if(numero_1 > numero_2){
        printf("O maior numero e %i e o menor e %i", numero_1, numero_2);
    }
    else{
        printf("O maior numero e %i e o menor e %i", numero_2, numero_1);
    }
    return 0;
}