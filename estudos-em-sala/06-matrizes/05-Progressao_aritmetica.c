#include <stdio.h>

int main(){
    float n_desejado, termo_n, razao, termo_1;
    
    printf("Digite a razao da P.A.: "); scanf("%f", &razao);
    printf("Digite o termo inicial da P.A.: "); scanf("%f", &termo_1);
    printf("Digite o termo n desejado: "); scanf("%f", &termo_n);
    
    n_desejado=termo_1+(termo_n-1)*razao;
    
    printf("Seu resultado e: %.1f", n_desejado);

    return 0;
}