#include <stdio.h>

int main(){
    
    int i, n1, n2;
    printf("Digite o minimo do intervalo: "); scanf("%i", &n1);
    printf("Digite o maximo do intervalo: "); scanf("%i", &n2);
    
    for (i=n1;i<=n2;i++){
        if(i%2==0){
            printf(" %i", i);
        }
        
    }
        
    return 0;
}