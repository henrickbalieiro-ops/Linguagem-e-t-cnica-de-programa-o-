#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	//PRIMEIRO EXERCICIO
	//troca a ordem do primeiro c o segundo
	
	int primeiro, segundo, aux;
	
	printf("insira o primeiro valor");
	scanf("%d", &primeiro);
	
	printf("insira o segundo valor");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;     //primeiro 5
	segundo = aux;          //segundo 18
	
	printf("%d, %d \n", primeiro, segundo);
	
	
	//SEGUNDO EXERCICIO 
	
	double valor;
	
	printf("digite um valo");
	scanf("%lf", &valor);
	printf("valor em notacao cientifica : %e\n", valor);
	
	
	//TERCEIRO EXERCICIO
	
	printf("digite um valor");
	scanf("");
	
	//QUARTO EXERCICIO
	
	float va, com, venda, total;
	
	printf("digite o valor do salario");
	scanf("%f", &va);
	
	printf("digite o total das vendas");
	scanf("%f", &venda);
	
	com = venda * 0,85;
	
	
	
	
	return 0;
}






