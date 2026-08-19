#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
/*	//PRIMEIRO EXERCICIO
	//troca a ordem do primeiro c o segundo
	
	int primeiro, segundo, aux;
	
	printf("insira o primeiro valor: ");
	scanf("%d", &primeiro);
	
	printf("insira o segundo valor: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;     //primeiro 5
	segundo = aux;          //segundo 18
	
	printf("%d, %d \n", primeiro, segundo);
	
	
	//SEGUNDO EXERCICIO 
	
	double valor;
	
	printf ("digite um valo");
	scanf("%lf", &valor);
	printf("valor em notacao cientifica : %e\n", valor);
	
	
	//TERCEIRO EXERCICIO
	int n, resultado, bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	printf("digite um valor para a convercao em binario");
	scanf("%d",&n);   // n=52                     //& endereco de memoria 
	
	
	bit_64 = n%2;     //26
    resultado = n/2;      
	
	bit_32 = resultado%2;
	resultado = resultado/2;  
	
	bit_16 = resultado%2;
	resultado = resultado/2;
	
	bit_8 = resultado%2;
	resultado = resultado/2;
	
	bit_4 = resultado%2;
	resultado = resultado/2;
	
	bit_2 = resultado%2;
	resultado = resultado/2;

	
	printf ("O numero %d em binario = %d%d%d%d%d%d%d", n, resultado%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
	
	
	//QUARTO EXERCICIO
	
	float va, com, venda, total;
	
	printf("digite o valor do salario");
	scanf("%f", &va);
	
	printf("digite o total das vendas");
	scanf("%f", &venda);
	
	com = venda * 0,85;
*/
	//QUINTO EXERCICIO
	//SEXTO EXERCICIO
	//SETIMO EXERCICIO
	
	//OITAVO EXERCICIO
	int x1, x2, y1, y2, p1, p2, dist;
	
	printf("insira as coordenadas do ponto P1");
	scanf("%d , %d", &x1, &y1);
	printf("insira as coordendas so ponto P1");
	scanf("%d %d", &x2, &y2);
	p1 = pow(x2-x1, 2); 
	p2 = pow(y2-y1, 2);
	dist = sqrt(p1+p2);
	printf("distancia: %f",dist);
	return 0;
}






