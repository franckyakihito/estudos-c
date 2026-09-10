#include <stdio.h>

int main(){
    float nota1, nota2, media;
    
    printf("Digite as duas notas do aluno: ");
    scanf("%f %f", &nota1, &nota2);
    
    if(nota1<0 || nota1>10 || nota2<0 || nota2>10){
        printf("Notas invalidas, nao podem ser maior que 10 ou menor que 0.");
    }
    else{
        media=(nota1+nota2)/2;
        printf("A media do aluno e: %.2f", media);
    }
    return 0;
}