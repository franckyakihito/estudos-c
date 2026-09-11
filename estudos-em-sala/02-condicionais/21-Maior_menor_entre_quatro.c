#include <stdio.h>

int main(){
    float a, b, c, d, maior, menor;
    
    printf("Digite os 4 valores que deseja saber qual o menor e o maior: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    maior = a;
    menor=a;
    
    if(b>maior){
        maior=b;
    }
    if(c>maior){
        maior=c;
    }
    if(d>maior){
        maior=d;    
    }
    
    if(b<menor){
        menor=b;
    }
    if(c<menor){
        menor=c;
    }
    if(d<menor){
        menor=d;
    }
    
    printf("O maior numero e %.2f e o menor e %.2f!", maior, menor);
    
    return 0;
}