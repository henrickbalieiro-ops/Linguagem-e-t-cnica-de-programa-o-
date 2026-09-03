#include <stdio.h>
#include <stdlib.h>
#include <math.h>	

int main(int argc, char *argv[]) {
/*	
	//EX1
	
   	float anoatual, idade, anonascimento;
	
	printf("digite sua idade: ");
	scanf("%f", &idade);
	
	printf("digite o ano: ");
	scanf("%f", &anoatual);
	
	anonascimento = anoatual - idade;
	
    printf("voce nasceu no ano de: %.0f", anonascimento);
    
    //EX2
    
    float kmh, ms;
    
    printf("apresente a velocidade km/h: ");
    scanf("%f", &kmh);
    
    ms = kmh/3.6;
    
    printf("%.2f km/h equivale a %.2f m/s\n", kmh, ms);
    
    //EX3
    
    float real, dolar;
    
    printf("insira o valor em real: ");
    scanf("%f", &real);
    
    dolar = real * 5.11;
    
    printf("%.2f reais equivale a %.2f dolar\n", real, dolar);

    //EX4
    
	float celsius, fahrenheit;
	
	printf("digite a temperatura um graus celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = celsius * (9.0/5.0) + 32.0;
	
	printf("%.2f graus celsius equivalem a %.2f fahrenheit", celsius, fahrenheit);

    //EX5
    
	float graus, radianos;
	
	printf("apresente o angulo em graus: ");	
	scanf("%f", &graus);
	
	radianos = graus * 3.141592/180;
	printf("%.2f equivalem a %.2f radianos", graus, radianos);
	
	//EX6
	
	int numero, antecessor, sucessor;
	
	printf("digite um numero: ");
	scanf("%d", &numero);
	
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	printf("o antecessor e sucessor sao: %.2d, %.2d ", antecessor, sucessor);
*/	
	//EX7
	
	float g1, g2, g3;
	printf("qual o valor recebido por cada ganhador?\n");
	g1 = 0.46 * 780.000;
	g2 = 0.32 * 780.000;
	g3 = (g1-g2);
	
	printf("o primeiro particiante recebera %.2f, o segundo %.2f, e o terceiro %.2f", g1, g2, g3);
	
	//EX8
	
	int horas, minutos, segundos;
	printf("") 
		
/*	
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
    
*/	 
	return 0;
}
