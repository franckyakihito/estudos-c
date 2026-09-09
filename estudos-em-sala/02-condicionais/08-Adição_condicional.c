#include <stdio.h>

int main(){
    
    float num_1, num_2, soma, novo_num;
    
    printf("Digite os numeros a serem somados e avaliados: "); scanf("%f %f", &num_1, &num_2);
    
    soma = num_1+num_2;
    
    if(soma>20){
        novo_num=soma+8;
        printf("A soma dos dois numeros e maior que 20, o novo numero e: %.0f", novo_num);
    }
    else{
        novo_num=soma-5;
        printf("A soma dos dois numeros nao e maior que 20, o novo numero e: %.0f", novo_num);
    }
    return 0;
}
