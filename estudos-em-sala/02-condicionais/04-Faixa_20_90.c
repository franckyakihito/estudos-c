#include <stdio.h>

int main(){
    int numero;

    printf("Digite o numero que deseja saber se esta entre 20 e 90: ");
    scanf("%i", &numero);

    if(numero >= 20 && numero <= 90){
        printf("Sim, o numero %i esta entre 20 e 90", numero);
    }
    else{
        printf("Nao, o numero %i nao esta entre 20 e 90", numero);
    }
    return 0;
}