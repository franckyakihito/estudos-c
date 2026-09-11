    #include <stdio.h>

    int main(){
        float num1, num2, num3, num4, maior;
        
        printf("Digite os 4 numeros que deseja saber qual o maior: ");
        scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
        
        maior = num1;
        
        if(num2 > maior){
            maior = num2;
        }
        
        if(num3 > maior){
            maior = num3;
        }
        
        if(num4 > maior){
            maior = num4;
        }
        
        printf("O maior numero e: %.2f!", maior);
        
        return 0;
    }