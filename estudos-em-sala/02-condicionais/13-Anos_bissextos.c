#include <stdio.h>
int main(){

int ano;

printf("Digite o ano que deseja saber se e bissexto: "); scanf("%i", &ano);

if(ano%400==0){
printf("O ano e bissexto!");
}
else if(ano%4==0 && ano%100!=0){
printf("O ano e bissexto!");
}
else{
printf("O ano nao e bissexto.");
}
return 0;
}