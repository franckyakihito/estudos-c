#include <stdio.h>

int main(){
    int num_1, num_2, num_3, maior;
    
    printf("Digite os numeros que deseja saber qual o maior: "); 
    scanf("%i %i %i", &num_1, &num_2, &num_3);
    
    if(num_1>num_2 && num_1>num_3){
        maior=num_1;
    }
    else if(num_2>num_1 && num_2>num_3){
        maior=num_2;
    }
    else{
        maior=num_3;
    }
    
    printf("O maior numero e: %i", maior);
    return 0;
}
