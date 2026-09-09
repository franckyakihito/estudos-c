#include <stdio.h>

int main(){
    int num_1, num_2, num_3, primeiro, segundo, terceiro;
    
    printf("Digite os numeros que deseja colocar em ordem crescente: "); 
    scanf("%i %i %i", &num_1, &num_2, &num_3);
    
    if(num_1<=num_2 && num_1<=num_3){
        primeiro=num_1;
            if(num_2<=num_3){
                segundo=num_2;
                terceiro=num_3;
            }
            else{
                segundo=num_3;
                terceiro=num_2;
            }
    }
    else if(num_2<=num_1 && num_2<=num_3){
        primeiro=num_2;
            if(num_1<=num_3){
                segundo=num_1;
                terceiro=num_3;
            }
            else{
                segundo=num_3;
                terceiro=num_1;
            }
    }
    else{
        primeiro=num_3;
            if(num_2<=num_1){
                segundo=num_2;
                terceiro=num_1;
            }
            else{
                segundo=num_1;
                terceiro=num_2;
            }
    }
    
    printf("Os numeros, em ordem crescente, sao: %i %i %i", primeiro, segundo, terceiro);
    return 0;
}