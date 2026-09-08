#include <stdio.h>                  //é um comando que inclui uma biblioteca no seu programa.
#include <stdlib.h>
#include <math.h>                   //biblioteca matematica 
#define pi 3.14

int main(int argc, char *argv[]) {  //inicio programa 
	
	float area, raio;                             //float(%f): é um tipo de variável usado para armazenar números com casas decimais EX 0.1
	printf("Insira o valor do raio:");            //int(%d): tipo de variável usado para armazenar números inteiros EX 1 
	scanf("%f", &raio);                           //printf: é um comando usado para mostrar informações na tela.
	                                              //scanf: é usado para receber uma informação que o usuário digita no teclado
	area = M_PI* pow(raio,2);                     //&: quando você usa scanf, ele serve para informar o endereço da variável na memória, para que o scanf possa colocar o valor digitado nela
	area = pi*(raio*raio);                        //pow: função da biblioteca math.h usada para fazer potências
	
	
	
	printf("A area do circulo de raio %f = %f", raio, area);
	
	
	
	
	
	
	
	
	printf("Agora a do trapezio");
	
	
	float areat, B, b, h, d;
	
	// B maisculo = base maior, b min = base menor e h = altura.
	
	printf("Digite o valor da base maior:");
	scanf("%f", &B);
	
	
	printf("Digite o valor da base menor:");
	scanf("%f", &b);
	
	
	printf("Digite o valor da altura");
	scanf("%f", &h);
	
	d = 2;
	areat = ((B+b)* h)/d;
	
	printf("A area do trapezio ((%f + %f)* %f) / %f = %f", B, b, h, d, areat);
	
	
	return 0;
}
