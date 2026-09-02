#include <stdio.h>

int main(){
    float taxa_cambio=0, valor_IOF=0, valor_necessario=0, dolares_comprados=0;

    printf("Digite a taxa de cambio do dolar: "); scanf("%f", &taxa_cambio);
    printf("Digite o valor do IOF sobre a operacao: "); scanf("%f", &valor_IOF);
    printf("Digite a quantidade de dolares que deseja comprar: "); scanf("%f", &dolares_comprados);  

    valor_necessario=(dolares_comprados*taxa_cambio)+(dolares_comprados*taxa_cambio*valor_IOF/100);
//pra calcular o valor em reais pra comprar em dolares precisa multiplicar quantos dolares quer comprar pela taxa
//de cambio (o valor do dolar no dia) e depois somar o IOF, que e o imposto que a instituicao financeira
//cobrara pela venda dos dolares, que tambem e uma taxa que representa um percentual do valor da compra
    printf("O valor necessario para comprar %.2f dolares e: %.2f reais", dolares_comprados, valor_necessario);
    return 0;   
}