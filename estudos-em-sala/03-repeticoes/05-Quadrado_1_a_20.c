#include <stdio.h>

int main(){
    float numero, quadrado;
    
    for(numero=1; numero<=20; numero++){
        quadrado=numero*numero;
        printf(" %.0f^2=%.0f", numero, quadrado);
    }

    return 0;
}