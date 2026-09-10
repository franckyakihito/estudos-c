#include <stdio.h>

int main(){
    int lado1, lado2, lado3;
    
    printf("Digite as 3 medidas que deseja saber se podem ser um triangulo: ");
    scanf("%i %i %i", &lado1, &lado2, &lado3);
    
    if(lado1<=0||lado2<=0||lado3<=0){
        printf("Valores invalidos, comprimento precisa ser maior que 0.");
    }
    
    else if(lado1<lado2+lado3 && lado2<lado1+lado3 && lado3<lado1+lado2){
        if(lado1==lado2&&lado2==lado3){
        printf("Sim, os lados podem ser um triangulo equilatero!");

        }
        else if(lado1==lado2||lado1==lado3||lado2==lado3){
            printf("Sim, os lados podem ser um triangulo isosceles!");
        }
        else{
            printf("Sim, os lados podem ser um triangulo escaleno!");
        }
    }
    else{
        printf("Nao, os comprimentos nao podem formar um triangulo.");
    }
    return 0;
}