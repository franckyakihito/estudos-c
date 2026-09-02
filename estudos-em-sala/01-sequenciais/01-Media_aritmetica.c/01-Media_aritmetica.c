#include <stdio.h>

int main(){
    float media, nota1, nota2, nota3, nota4;

    printf("Digite a primeira nota do estudante: "); scanf("%f", &nota1);
    printf("Digite a segunda nota do estudante: "); scanf("%f", &nota2);    
    printf("Digite a terceira nota do estudante: "); scanf("%f", &nota3);
    printf("Digite a quarta nota do estudante: "); scanf("%f", &nota4);

    media=(nota1+nota2+nota3+nota4)/4;

    printf("A media aritmetica das notas do estudante e: %.2f", media);
    return 0;
}

