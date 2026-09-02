#include <stdio.h>
#include <math.h>

int main(){
    
    float cateto_op, cateto_adj, hip;
    
    printf("Digite a medida do cateto oposto em metros: "); scanf("%f", &cateto_op);
    printf("Digite a medida do cateto adjacente em metros: "); scanf("%f", &cateto_adj);
    
    hip=sqrt(pow(cateto_op, 2)+pow(cateto_adj, 2));
    
    printf("A medida da hipotenusa, em metros, e: %.2f", hip);

    return 0;
}