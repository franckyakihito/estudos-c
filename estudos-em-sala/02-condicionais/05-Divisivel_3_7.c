#include <stdio.h>

int main(){
    int numero, resto;

    printf("Digite o numero que deseja saber se divisivel por 3 e 7: ");
    scanf("%i", &numero);

    resto = numero%21;
    
    if(numero%3==0 && numero%7==0){
        printf("Sim, o numero %i e divisivel por 3 e 7", numero);
    }
    else{
        printf("Nao, o numero %i nao e divisivel por 3 e 7, o resto da divisao e: %i", numero, resto);
    }
    return 0;       
}