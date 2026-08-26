#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159


int main(int argc, char *argv[]) {
	
	//PRIMEIRO EXERCICIO
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
	
	double numero, mantissa;
	int expoente = 0;
	printf("Digite o numero que deseja ver em notacao cientifica: ");
	scanf("%lf", &numero);
	mantissa = numero; 
	if (mantissa != 0) {
        while (mantissa >= 10) {
            mantissa /= 10;
            expoente++;
        }
        while (mantissa < 1) {
            mantissa *= 10;
            expoente--;
        }
    }

    printf("Valor em notacao cientifica: %.2lf x 10^%d\n\n\n", mantissa, expoente);
	
	
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
	
	printf("digite o valor do salario:");
	scanf("%f", &va);
	
	printf("digite o total das vendas:");
	scanf("%f", &venda);
	
	com = venda * 0,15;
	total = venda + com + va;
	
	printf( "%.2f\n\n", total);
	

	//QUINTO EXERCICIO

		float a, b, c, d, soma, media, prodt;
	
	
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    printf("Digite o quarto numero: ");
    scanf("%f", &d);
    
    
    soma = a+b+c+d;
    printf("A soma dos 4 valores e: %f\n", soma);
    
    
    media = (a+b+c+d)/4.0;
    printf("A media e: %.2f\n", media);
    
    
    prodt = a*b*c*d;
    printf("O produtorio e: %f/n", prodt);
	
	
	
	
	
	
	
	//SEXTO EXERCICIO
	
	int d, ianos, imeses, idias;

    printf("Conversor de dias em Ano(s), Mes(es), Dia(s)\n");
    printf("Digite o numero de dias: ");
    scanf("%d", &d);


    ianos = d / 365;
    imeses = (d %365) / 30;
    idias = d %365 % 30;

    printf("Sua idade = %d Ano(s), %d Mes(s), %d Dia(s)", ianos, imeses, idias);

	//SETIMO EXERCICIO
	float volume, raio;
	
	printf("digite o raio:");
	scanf("%f", &raio);
	
	volume = (3.0/4.0)* pi * pow (raio, 3);

    printf("O volume da esfera e: %.2f\n", volume);
    
	
	//OITAVO EXERCICIO
		
	int x1, x2, y1, y2, p1, p2;
	float dist;
	
	printf("insira as coordenadas do ponto P1:");
	scanf("%d,%d", &x1, &y1);
	
	printf("insira as coordendas so ponto P1:");
	scanf("%d,%d", &x2, &y2);
	
	p1 = pow(x2-x1, 2); 
	p2 = pow(y2-y1, 2);
	dist = sqrt(p1+p2);
	
	printf("distancia: (%f)",dist);
	
	return 0;
}
