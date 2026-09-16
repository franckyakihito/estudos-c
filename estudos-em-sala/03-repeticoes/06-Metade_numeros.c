#include <stdio.h>
int main(){
    float numero;
    int i;
    
    for(i=1; i<=4; i++){
        printf("Digite o numero %i: ", i);
        scanf("%f", &numero);
        printf("A metade e: %.2f\n", numero/2);
    }
    
    return 0;
}