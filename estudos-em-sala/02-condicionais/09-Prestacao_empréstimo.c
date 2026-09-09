#include <stdio.h>

int main(){
    float prestacao, salario, minimo_salar;
    
    printf("Digite o salario do trabalhador: "); scanf("%f", &salario);
    printf("Digite o valor da prestacao do emprestimo: "); scanf("%f", &prestacao);
    
    minimo_salar = 0.2 * salario;
    
    if(minimo_salar < prestacao){
        printf("Emprestimo negado :(");
    }
    else{
        printf("Emprestimo concedido :)");
    }
    return 0;
}