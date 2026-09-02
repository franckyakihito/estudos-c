#include <stdio.h>

int main(){
    
    int placa, unidade, dezena, centena, milhar;
    
    printf("Digite a placa do veiculo: "); scanf("%i", &placa);
    
    if(placa<1000 || placa>=10000){
    printf("Placa invalida");
    return 0;
    }
    
    unidade=placa%10; // % é o resto da divisao por 10, nesse caso 4, a unidade.
    dezena=(placa/10)%10;
    centena=(placa/100)%10;
    milhar=(placa/1000);
    
    printf("\nA casa da unidade e: %i", unidade);
    printf("\nA casa da dezena e: %i", dezena);
    printf("\nA casa da centena e: %i", centena);
    printf("\nA casa do milhar e: %i", milhar);
    
    

    return 0;
}
