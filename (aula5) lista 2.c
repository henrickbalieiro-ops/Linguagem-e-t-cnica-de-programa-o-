#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//EX1
	
    long double ano_atual, idade, ano_nascimento;
	
	printf("digite sua idade: ");
	scanf("%Lf", &idade);
	
	printf("digite o ano: ");
	scanf("%Lf", &ano_atual);
	
	ano_nascimento = ano_atual - idade;
	
    printf("voe nasceu no ano de: %Lf", ano_nascimento);
	
	//EX10
	
	int a, b, c, d, maior, maior_temp1, maior_temp2;
	
	printf("informe os valores a serem comparados:");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	
	//conta
	//compara os dois primeiros
    maior_temp1 = (a+b+abs(a-b))/2;
    maior_temp2 = (maior_temp1 + c +abs(maior_temp1 - c))/2;
    
    maior = (maior_temp2 +d +abs(maior_temp2-d))/2;
    
    printf("o maior entre |%d|%d|%d|%d| = %d", a,b,c,d, maior);
     
	return 0;
}
