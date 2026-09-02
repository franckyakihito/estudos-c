#include <stdio.h>

int main(){
    float temp_c, temp_f;
    
    printf("Digite a temperatura em graus fahrenheit: "); scanf("%f", &temp_f);
    
    temp_c=((temp_f-32)*5)/9;
    
    printf("A temperatura em graus celsius e: %.2f", temp_c);

    return 0;
}