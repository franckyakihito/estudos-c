#include <stdio.h>
#include <math.h>

int main(){
    int termo_n;
    float n_desejado, razao, termo_1;
    
    printf("Digite a razao da P.G.: "); scanf("%f", &razao);
    printf("Digite o termo inicial da P.G.: "); scanf("%f", &termo_1);
    printf("Digite o termo n desejado: "); scanf("%i", &termo_n);
    
    n_desejado=termo_1*(pow(razao,termo_n-1));
    
    printf("Seu resultado e: %.1f", n_desejado);

    return 0;
}