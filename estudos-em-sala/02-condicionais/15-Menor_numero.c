#include <stdio.h>

int main(){
    int num_1, num_2, num_3, menor;
    
    printf("Digite os numeros que deseja saber qual o menor: "); 
    scanf("%i %i %i", &num_1, &num_2, &num_3);
    
    if(num_1<num_2 && num_1<num_3){
        menor=num_1;
    }
    else if(num_2<num_1 && num_2<num_3){
        menor=num_2;
    }
    else{
        menor=num_3;
    }
    
    printf("O menor numero e: %i", menor);
    return 0;
}
