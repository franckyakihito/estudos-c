#include <stdio.h>

int main(){
    float quant_comb, tempo_gasto, vel_media, distancia;
    
    printf("Digite o tempo gasto na viagem em horas: "); scanf("%f", &tempo_gasto);
    printf("Digite a velocidade media na viagem em km/h: "); scanf("%f", &vel_media);
    
    distancia=vel_media*tempo_gasto;
    quant_comb=distancia/12;
    
    printf("\nA velocidade media foi de: %.1f km/h", vel_media);
    printf("\nO tempo gasto na viagem foi de: %.1f horas", tempo_gasto);
    printf("\nA distancia percorrida foi de:%.1f km", distancia);
    printf("\nA quantidade de combustivel gasto na viagem foi de: %.1f litros", quant_comb);
    

    return 0;
}
