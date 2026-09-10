#include <stdio.h>

int main(){
    float bimestre1, bimestre2, media_semestral;
    
    printf("Digite as duas notas bimestrais do aluno: ");
    scanf("%f %f", &bimestre1, &bimestre2);
    
    if(bimestre1<0 || bimestre1>10 || bimestre2<0 || bimestre2>10){
        printf("Notas invalidas, nao podem ser maior que 10 ou menor que 0.");
    }
    else{
        media_semestral=(bimestre1+bimestre2)/2;
        if(media_semestral>=7.0){
            printf("Aluno aprovado! Sua media semestral foi: %.2f", media_semestral);
        }
        else if(media_semestral<3.0){
            printf("Aluno reprovado. Sua media semestral foi inferior a 3: %.2f", media_semestral);
        }
        else{
            printf("Aluno ainda fazendo recuperacoes. Sua media semestral e: %.2f", media_semestral);
        }
    }
    return 0;
}