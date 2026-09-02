#include <stdio.h>

int main(){
    float nota_1, nota_2, nota_3, media_ponderada;
    
    printf("Digite a nota da avaliacao 1: "); scanf("%f", &nota_1);
    printf("Digite a nota da avaliacao 2: "); scanf("%f", &nota_2);
    printf("Digite a nota da avaliacao 3: "); scanf("%f", &nota_3);
    media_ponderada=(0.3*nota_1+0.5*nota_2+0.2*nota_3);
    printf("\nA media das notas e: %.2f", media_ponderada);
    return 0;
}
