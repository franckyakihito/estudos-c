#include <stdio.h>

int main(){
    int soma=0;
    float media;
    
    for(int i=1; i<=100; i++){
        printf("% i", i);
        soma=soma+i;
        media=soma/100.0;
    }
    
    printf("\nA soma do 1 ao 100 e: %i", soma);
    printf("\nA media da soma do 1 ao 100 e: %.1f", media);
    return 0;
}