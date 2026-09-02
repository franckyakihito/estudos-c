#include <stdio.h>
#include <math.h>

int main(){
    
    float lado, area;
    
    printf("Digite o valor do lado do triangulo: ");
    scanf("%f", &lado);
    
    area = (sqrt(3) / 4) * (lado * lado);
    
    printf("A area do triangulo equilatero e: %.2f\n", area);
    
    return 0;
}