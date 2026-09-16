#include <stdio.h>

int main(){
    int soma=0;
    
    for(int i=1;i<=100;i++){
        printf("%i\n", i);
        soma=soma+i;
    }
    printf("A soma total e: %i", soma);
    return 0;
}
