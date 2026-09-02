#include <stdio.h>

int main(){
    float batimentos, idade;
    
    printf("Digite a idade da pessoa: "); scanf("%f", &idade);
    
    batimentos=idade*60*60*24*365.25;
    
    printf("Ao viver %.0f anos, o coracao da pessoa batera cerca de %.0f vezes", idade, batimentos);
    return 0;
}
