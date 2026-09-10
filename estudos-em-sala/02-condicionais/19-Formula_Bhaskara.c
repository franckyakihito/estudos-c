#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c; 
    float delta, resultado1, resultado2;
    
    printf("Digite a,b e c, para seguir o formato a.x^2+b.x+c a expressao que deseja calcular:");
    scanf("%i %i %i", &a, &b, &c);
    
    delta =(b*b) - (4*a*c);
    
    if(a==0 || delta<0){
        printf("Equacao invalida, a nao pode ser nulo nem delta pode ser negativo.");
    }
    else{
    resultado1=(-b + sqrt(delta)) / (2*a);
    resultado2=(-b - sqrt(delta)) / (2*a);
    printf("Os resultados, pela formula de bhaskara, sao x1:%.2f e x2:%.2f", resultado1, resultado2);
    }
    return 0;
}