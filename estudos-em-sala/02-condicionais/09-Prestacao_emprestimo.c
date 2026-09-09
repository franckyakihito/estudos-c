#include <stdio.h>

int main(){
    float prestacao, salario, minimo_salar;
    
    printf("Digite o salario do trabalhador: "); scanf("%f", &salario);
    printf("Digite o valor da prestacao do emprestimo: "); scanf("%f", &prestacao);
    
    minimo_salar = 0.2 * salario;
    
    if(minimo_salar < prestacao){
        printf("Emprestimo negado, salario do trabalhador inferior a 20 porcento do valor da prestacao");
    }
    else{
        printf("Emprestimo concedido!");
    }
    return 0;
}