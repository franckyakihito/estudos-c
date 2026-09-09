#include <stdio.h>

int main(){
    
    char sexo;
    float altura, peso;
    
    printf("Digite o sexo do individuo em F/M: "); scanf("%c", &sexo);
    
    if(sexo=='F'){
        printf("Digite a altura em metros: "); scanf("%f", &altura);
        
        peso=(62.1*altura)-44.7;
        
        printf("O peso ideal e: %.2f", peso);
    }
    else if(sexo=='M'){
        printf("Digite a altura em metros: "); scanf("%f", &altura);
        
        peso=(72.7*altura)-58;
        
        printf("O peso ideal e: %.2f", peso);
    }
    else{
        printf("Caractere invalido");
    }
    return 0;
}