#include <stdio.h>
// com vetor e repeticao e bem mais facil e simples fazer, mas como e exclusivamente condicional, so sera usado if e else
int main(){
    int dia, mes, dias_passados;
    
    printf("Digite o dia e mes no formato 01 01 para calcular quantos dias se passaram desde 01/01: ");
    scanf("%i %i", &dia, &mes);
    
    if(mes==1){
        dias_passados=dia-1;
    }
    else if(mes==2){
        dias_passados=31+dia-1;
    }
    else if(mes==3){
        dias_passados=31+28+dia-1;
    }
    else if(mes==4){
        dias_passados=31+28+31+dia-1;
    }
    else if(mes==5){
        dias_passados=31+28+31+30+dia-1;
    }
    else if(mes==6){
        dias_passados=31+28+31+30+31+dia-1;
    }
    else if(mes==7){
        dias_passados=31+28+31+30+31+30+dia-1;
    }
    else if(mes==8){
        dias_passados=31+28+31+30+31+30+31+dia-1;
    }
    else if(mes==9){
        dias_passados=31+28+31+30+31+30+31+31+dia-1;
    }
    else if(mes==10){
        dias_passados=31+28+31+30+31+30+31+31+30+dia-1;
    }
    else if(mes==11){
        dias_passados=31+28+31+30+31+30+31+31+30+31+dia-1;
    }
    else if(mes==12){
        dias_passados=31+28+31+30+31+30+31+31+30+31+30+dia-1;
    }
    
    printf("Se passaram %i dias desde 01/01.", dias_passados);

    return 0;
}