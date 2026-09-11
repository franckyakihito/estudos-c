#include <stdio.h>

int main(){
    float altura, peso, IMC;
    
    printf("Digite a altura e peso, em metros e quilogramas: ");
    scanf("%f %f", &altura, &peso);
    
    IMC=peso/(altura*altura);
    
    if(IMC<20){
        printf("O individuo esta abaixo do peso!");
    }
    else if(IMC<25){
        printf("O individuo esta com o peso normal!");
    }
    else if(IMC<30){
        printf("O individuo esta em sobre-peso!");
    }
    else if(IMC<40){
        printf("O individuo esta obeso!");
    }
    else{
        printf("O individuo esta em obesidade morbida!");
    }
    
    return 0;
}