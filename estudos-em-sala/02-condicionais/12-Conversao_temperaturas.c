#include <stdio.h>
int main(){
    float celsius=0, fahrenheit=0, temperatura=0;
    char opcao;

    printf("Digite a temperatura: "); scanf("%f", &temperatura);

    printf("Digite a opcao de conversao (C para Celsius e F para Fahrenheit): "); scanf(" %c", &opcao);

    if(opcao == 'C' || opcao == 'c'){
    fahrenheit = temperatura;
    celsius = (fahrenheit - 32) * 5/9;
    printf("\nA temperatura em Celsius e: %.2f Graus Celsius", celsius);
    }
    else if(opcao == 'F' || opcao == 'f'){
    celsius = temperatura;
    fahrenheit = (celsius * 9/5) + 32;
    printf("\nA temperatura em Fahrenheit e: %.2f Graus Fahrenheit", fahrenheit);
    }
    else{
    printf("Opcao invalida!");
    }

    return 0;
}
//se o usuario escolher Celsius, o programa vai ler a temperatura como Fahrenheit e converter para Celsius
//se o usuario escoleher Fahrenheit, o programa vai ler a temperatura como Celsius e converter para Fahrenheit