#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, z1, x2, y2, z2, distancia;
    
    printf("Digite o primeiro ponto x y z em metros: "); scanf("%f %f %f", &x1, &y1, &z1);
    printf("Digite o segundo ponto x y z em metros: "); scanf("%f %f %f", &x2, &y2, &z2);
    distancia=sqrt(pow(x2-x1, 2)+ pow(y2-y1, 2) + pow(z2-z1, 2));
    
    printf("A distancia entre os dois pontos e de: %.2f metros", distancia);

    return 0;
}