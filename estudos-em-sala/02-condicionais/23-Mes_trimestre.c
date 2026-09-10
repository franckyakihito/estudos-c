#include <stdio.h>

int main(){
    int mes;
    
    printf("Digite o numero do mes que deseja saber o trimestre: ");
    scanf("%i", &mes);
    
    
    if(mes<1 || mes>12){
        printf("Valor invalido, digite um numero de 1 a 12.");
    }
    else{
        if(mes>0 && mes<4){
            printf("\nO mes digitado pertence ao primeiro trimestre.");
        }
        else if(mes>3 && mes<7){
            printf("\nO mes digitado pertence ao segundo trimestre.");
        }
        else if(mes>6 && mes<10){
            printf("\nO mes digitado pertence ao terceiro trimestre.");
        }
        else{
            printf("\nO mes digitado pertence ao quarto trimestre.");
        }
    }
    return 0;
}