#include <stdio.h>

int main(){
    float preco;
    char estado[3]; // 3 nao quer dizer 0,1,2,3 espacos, quer dizer que cabem 3 elementos no vetor char
    
    printf("Digite o valor e o estado (sigla em maiusculo) de destino do produto: ");
    scanf("%f %2s", &preco, estado); // estado nao precisa do & pq ja se refere ao vetor declarado, o 2 no s e pq sao 2 letras
    
    if(preco<=0){
        printf("Valor invalido, digite um valor acima de 0.");
    }
    else{
        if(estado[0]=='M' && estado[1]=='G'){ // cada espaco do vetor vai receber uma letra e o ultimo caractere simboliza o final da string
            preco=preco+(preco*0.07);    
            printf("O preco final do produto para MG e: %.2f!", preco);
        }
        else if(estado[0]=='S' && estado[1]=='P'){
            preco=preco+(preco*0.12);
            printf("O preco final do produto para SP e: %.2f!", preco);
        }
        else if(estado[0]=='R' && estado[1]=='J'){
            preco=preco+(preco*0.15);
            printf("O preco final do produto para RJ e: %.2f!", preco);
        }
        else if(estado[0]=='M' && estado[1]=='S'){
            preco=preco+(preco*0.08);
            printf("O preco final do produto para MS e: %.2f!", preco);
        }
        else{
            printf("Estado invalido, por favor digite um dos estados validos: MG, SP, RJ, MS.");
        }
    }
    return 0;
}