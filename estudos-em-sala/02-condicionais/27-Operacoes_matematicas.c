#include <stdio.h>

int main(){
    char operacao; // sem vetor como e so 1 caractere
    float num1, num2, resultado;
    
    printf("Escolha uma das seguintes operacoes para ser realizada: \n Adicao (+), Subtracao (-), Multiplicacao (*) e Divisao (/)\n");
    scanf(" %c", &operacao); // espaco antes do c p scanf ignorar espaco
    printf("Digite 2 numeros na ordem que deseja realizar a operacao: ");
    scanf("%f %f", &num1, &num2);
    
    if(operacao=='+'){
        resultado=num1+num2;
        printf("O resultado da soma e: %.2f!", resultado);
    }
    else if(operacao=='-'){
        resultado=num1-num2;
        printf("O resultado da subtracao e: %.2f!", resultado);
    }
    else if(operacao=='*'){
        resultado=num1*num2;
        printf("O resultado da multiplicacao e: %.2f!", resultado);
    }
    else if(operacao=='/'){
        if(num2==0){
            printf("Divisao impossivel, digite um numero sem ser nulo.");
        }
        else{
        resultado=num1/num2;
        printf("O resultado da divisao e: %.2f!", resultado);
        } 
    }
    else{
        printf("Operacao invalida, digite um caractere entre +, -, * e /");
    }
    return 0;
}