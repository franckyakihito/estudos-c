#include <stdio.h>
 
int main() {
    float taxa_dia=0, taxa_km=0, km_rodados=0, num_dias=0, num_km=0, valor_total=0;

    printf("Digite a taxa de aluguel por dia: "); scanf("%f", &taxa_dia);
    printf("Digite a taxa de aluguel por km rodado: "); scanf("%f", &taxa_km);
    printf("Digite o numero de dias de aluguel: "); scanf("%f", &num_dias);
    printf("Digite o numero de km rodados: "); scanf("%f", &num_km);

    valor_total=(taxa_dia*num_dias)+(taxa_km*num_km);

    printf("O valor que sera pago pelo aluguel do veiculo e: %.2f reais", valor_total);
    return 0;
}