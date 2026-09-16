#include <stdio.h>

int main(){
    int i, quant_neg = 0;
    float soma = 0, numero;
    
    for(i = 1; i <= 20; i++){
        printf("Digite o numero %i: ", i);
        scanf("%f", &numero);
        
        if(numero > 0){
            soma = soma + numero;
        }
        else if(numero < 0){
            quant_neg++;
        }
        else{
           printf("0 nao e negativo ou positivo, sera descartado.\n");
        }
    }
        printf("\nA soma dos positivos e: %.2f\n", soma); 
    printf("A quantidade de numeros negativos inseridos foi: %i\n", quant_neg);

    return 0;
}
