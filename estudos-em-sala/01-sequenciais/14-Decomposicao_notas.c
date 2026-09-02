#include <stdio.h>
#include <math.h>

int main() {
int valor, notas100, notas50, notas20, notas10, notas5, moeda1;

printf("Digite o valor a ser decomposto: ");
scanf("%i", &valor);

notas100 = valor / 100; valor = valor % 100;
notas50 = valor / 50; valor = valor % 50;
notas20 = valor / 20; valor = valor % 20;
notas10 = valor / 10; valor = valor % 10;
notas5 = valor / 5; valor = valor % 5;
moeda1 = valor / 1;
printf("\nNotas de 100 reais: %i", notas100);
printf("\nNotas de 50 reais: %i", notas50);   
printf("\nNotas de 20 reais: %i", notas20);
printf("\nNotas de 10 reais: %i", notas10);
printf("\nNotas de 5 reais: %i", notas5);
printf("\nMoedas de 1 real: %i", moeda1);

return 0;
}