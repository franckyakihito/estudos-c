#include <stdio.h>

int main(){
    int idade;
    
    printf("Digite a idade do nadador: ");
    scanf("%i", &idade);
    
    if(idade<5){
        printf("O nadador e muito novo, nao pode participar do campeonato.");
    }
    else if(idade>=5 && idade<=7){ // dava pra ter deixado so idade <=7, se fosse menor q 5 ja tem o if para cobrir 
        printf("O nadador esta na categoria Infantil A!");
    }
    else if(idade>=8 && idade<=10){
        printf("O nadador esta na categoria Infantil B!");
    }
    else if(idade>=11 && idade<=13){
        printf("O nadador esta na categoria Juvenil A!");
    }
    else if(idade>=14 && idade<=17){
        printf("O nadador esta na categoria Juvenil B!");
    }
    else{
        printf("O nadador esta na categoria Senior!");
    }
    
    return 0;
}