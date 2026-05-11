#include <stdio.h>
int main(){
    int numero;

    printf("Digite um numero para ver sua tabuada\n"); scanf("%i", &numero);

    for(int i=1;i<=10;i++){
        printf("%i x %i = %i\n", numero, i, numero*i);
    }

    return 0;
}