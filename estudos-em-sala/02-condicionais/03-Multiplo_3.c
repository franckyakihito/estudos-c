#include <stdio.h>

int main(){
    int numero, resto;
        
    printf("Digite o numero que deseja saber se e multiplo de 3: "); 
    scanf("%i", &numero);

    resto = numero%3;
    
    if(numero%3==0){
        printf("Sim, o numero %i e multiplo de 3", numero);
    }
    else{
        printf("Nao, o numero %i nao e multiplo de 3, o resto da divisao e: %i", numero, resto);
    }
    return 0;
}