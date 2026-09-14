#include <stdio.h>

int main() {
	int quantidade;
	float preco;
	char codigo[4];

	printf("Cachorro quente 101 RS5.00 \n"); 
	printf("Bauru 102 RS8.00 \n"); 
	printf("Hamburger 103 RS10.00 \n"); 
	printf("Xsalada 104 RS15.00 \n");
	
	printf("Digite o codigo do item que deseja, escolha 1 item por vez e a quantidade que deseja: ");
	scanf("%3s %i", codigo, &quantidade);

	if(quantidade<=0 || codigo[0]!='1'){
	    printf("Quantidade ou codigo incorreto, digite um codigo valido e uma quantidade acima de 0.");
	}
	else{
	    if(codigo[0]=='1' && codigo[1]=='0' && codigo[2]=='1'){ 
	        preco=5.00*quantidade;
	        printf("O valor do pedido e de: %.2f reais.", preco);
	    }
	    else if(codigo[0]=='1' && codigo[1]=='0' && codigo[2]=='2'){
	        preco=8.00*quantidade;
	        printf("O valor do pedido e de: %.2f reais.", preco);
	    }
	    else if(codigo[0]=='1' && codigo[1]=='0' && codigo[2]=='3'){
	        preco=10.00*quantidade;
	        printf("O valor do pedido e de: %.2f reais.", preco);
	    }
	    else if(codigo[0]=='1' && codigo[1]=='0' && codigo[2]=='4'){
	        preco=15.00*quantidade;
	        printf("O valor do pedido e de: %.2f reais.", preco);
	    }
	    else{
	        printf("Codigo invalido, digite um codigo entre 101 a 104.");
	    }
	}
	return 0;
}