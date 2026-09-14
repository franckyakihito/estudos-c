#include <stdio.h> 
int main(){ 
    int dia, mes, ano; 
    printf("Digite o dia, mes e ano no formato 01 01 2000: "); 
    scanf("%i %i %i", &dia, &mes, &ano); 
    if(dia<=0 || dia>=32 || mes<=0 || mes>=13){
        printf("Data invalida."); 
    } 
    else{
        if(mes==1 || mes==3 || mes==5 || mes == 7 || mes==8 || mes==10 || mes==12){
            if(dia>31){ // esse >31 nem precisava pq o if de cima ja pega, mas deixei por ludicidade
                printf("Dia invalido.");
            }
            else{
                printf("A data e valida!");
            }
        }
        else if(mes==4 || mes==6 || mes==9 || mes==11){
            if(dia>30){
                printf("Dia invalido.");
            }
            else{
                printf("A data e valida!");
            }
        }
        else if(mes==2){
            if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
                if(dia>29){
                    printf("Dia invalido.");
                }
                else{
                    printf("A data e valida!");
                }
            }
        else{
            if(dia>28){
                printf("Dia invalido.");
                }
            else{
                printf("A data e valida!");
                }
            }
            }
        }
return 0;              
}

