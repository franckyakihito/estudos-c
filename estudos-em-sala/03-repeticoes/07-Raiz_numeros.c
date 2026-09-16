#include <stdio.h>
#include <math.h>

int main(){
    float numero;
    int i;
    
    for(i=1;i<=4;i++){
        printf("Digite o numero %i: ", i);
        scanf("%f", &numero);
        printf("A raiz do numero e: %.2f\n", sqrt(numero));
    }
    return 0;
}