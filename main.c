#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*
	//ex1
	
	int a, b, c, d, aux;                              //a b c d 1 2 3 4 
	printf("informe a variavel a:\n");               //c a d b 3 1 4 2
	scanf("%d", &a);
	printf("informe a variavel b:\n");     
	scanf("%d", &b);
	printf("informe a variavel c:\n");     
	scanf("%d", &c);
	printf("informe a variavel d:\n");      
	scanf("%d", &d);
	//trocar a ordem usando somente 1 vez o aux
	
	aux = a; 
	a = c;
	c = d;
	d = b;
	b = aux;
	
	printf("a nova ordem e %d %d %d %d", a, b, c, d);
	*/
	//ex2
	
	float valor_patrimonial, quant_acoes, preco_atual, pvp, vpa;
	
	printf("informe o valor patrimonial da empresa:\n ");
	scanf("%f", &valor_patrimonial);
	
	printf("informe a quantidade de acoes:\n ");
	scanf("%f", &quant_acoes);
	
	printf("informe o preco atual das acoes:\n ");
	scanf("%f", &preco_atual);
	
	vpa = valor_patrimonial/quant_acoes;
	pvp = preco_atual/vpa;
	
	if(pvp<0){
		printf("pesimo\n");
	} else if(pvp<0.8){
		printf("otimo\n");
	} else if (pvp<1.2){
		printf("indiferente\n");
	} else if (pvp<2.0){
		printf("boa\n");
	} else {
		printf("ruim\n");
	}
	
	printf("o vpa e pvp sao respectivamente %.2f %.2f", vpa, pvp);
	
	return 0;
}
