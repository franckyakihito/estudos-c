#include <stdio.h>
#include <math.h>

int main(){
    float numero, cubo;
    int i;
    
    for(i=1; i<=10; i++){
        printf("Digite o numero %i: ", i);
        scanf("%f", &numero);
        cubo=pow(numero,3);
        printf("O cubo do numero e: %.1f\n", cubo);
    }

    return 0;
}