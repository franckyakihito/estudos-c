#include <stdio.h>

int main(){
    
    float n1, n2;
    
    printf("Digite os dois numeros: "); scanf("%f %f", &n1, &n2);
    
    if(n1>n2){
        printf("O primeiro numero e maior que o segundo: %.0f>%.0f", n1, n2);
    }
    else if(n1==n2){
        printf("Os dois numeros sao iguais");
    }
    else{
        printf("O segundo numero e maior que o primeiro: %.0f<%.0f", n1,n2);
    }
    return 0;
}
