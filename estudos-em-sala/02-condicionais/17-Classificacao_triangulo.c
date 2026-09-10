#include <stdio.h>

int main(){
    int angulo1, angulo2, angulo3;
    printf("Digite os angulos internos do triangulo que deseja descobrir a classificacao: ");
    scanf("%i %i %i", &angulo1, &angulo2, &angulo3);
    
    if(angulo1+angulo2+angulo3==180){
        if(angulo1>90||angulo2>90||angulo3>90){
            printf("O triangulo e obstusangulo!");
        }
        else if(angulo1==90||angulo2==90||angulo3==90){
            printf("O triangulo e retangulo!");
        }
        else{
            printf("O triangulo e acutangulo!");
        }
    }
    else if(angulo1==0||angulo2==0||angulo3==0){
        printf("Valor invalido, angulo igual a 0.");
    }
    else{
        printf("Valor invalido, soma dos angulos internos diferente de 180.");
    }
    return 0;
}