#include <stdio.h>

int main(){
    int quadrado=0;
    
    for(int i=1; i<=100; i++){
        printf("%i\n", i);
        quadrado=quadrado+i*i;
    }
    printf("A soma dos quadrados do 1 ao 100 e: %i", quadrado);

    return 0;
}
