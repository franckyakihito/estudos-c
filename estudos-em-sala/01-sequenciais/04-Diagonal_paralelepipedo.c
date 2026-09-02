#include <stdio.h>
#include <math.h>

int main(){
    float diagonal, a, b, c;
    
    printf("Digite a medida da aresta em metros: "); scanf("%f", &a);
    printf("Digite a medida da base em metros: "); scanf("%f", &b);
    printf("Digite a medida da altura em metros: "); scanf("%f", &c);
    
    diagonal=sqrt(pow(a,2)+pow(b,2)+pow(c,2));
    
    printf("A diagonal do paralelepipedo e de: %.2f metros", diagonal);

    return 0;
}
