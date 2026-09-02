#include <stdio.h>

int main(){
    int numero;
    
    printf("Digite o numero que deseja saber se e par ou impar: "); scanf("%i", &numero);
    
    if(numero%2==1){ // esse operador % nao funciona com numero decimal, que e quando se usa float, por isso, usar int.
        printf("O numero e impar");
    }
    else{
        printf("O numero e par");
    }

    return 0;
}
