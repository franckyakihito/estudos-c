#include <stdio.h>
int main(){
    int idade;
    float altura;
    char nome[50];

    printf("Digite sua idade: "); scanf("%i", &idade);
    printf("Digite sua altura:"); scanf("%f", &altura);
    printf("Digite seu nome: "); scanf(" %[^\n]", nome); // o %[^\n] é um truque para ler os espaços no nome para o printf digitar o nome completo caso assim inserido.
//o ^é o símbolo de negação e o /n é caractere de nova linha, o enter, ou seja, ele le todos os caracteres digitados exceto o enter
// tambem precisa dar um espaço no scanf do nome para evitar que o enter do scanf anterior seja lido como parte do nome 
printf("Ola %s  , voce tem %i anos e sua altura e %.2f metros", nome, idade, altura);
    
    return 0;
}