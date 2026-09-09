#include <stdio.h>

int main(){
    
    float quant_maca, valor_1, valor_2;
    
    printf("Digite a quantidade de macas a serem compradas: "); scanf("%f", &quant_maca);
    
    if(quant_maca<12){
        valor_1=quant_maca*0.30;
        printf("Quantidade inferior a 12, o valor das macas sera: %.2f R$", valor_1);
    }
    else{
        valor_2=quant_maca*0.25;
        printf("Quantidade igual ou superior a 12, o valor das macas sera: %.2f R$", valor_2);
    }

    return 0;
}