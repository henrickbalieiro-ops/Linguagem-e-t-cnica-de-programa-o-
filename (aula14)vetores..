#include <stdio.h>
#include <stdlib.h>

//aula q a luz caiu
int compara(int a, int b){
	if (a > b) return a;
	else return b;
}


int main(int argc, char *argv[]) {
	int valores[10];
	int maior, menor, i;

	printf("vamos ler os valores: \n");
	//for (inicializacao; verificacao; incremento)
	//i = indice
	//10 execucoes
	for (i=1; i<10; i++){
		scanf("%d", &valores[i]);
	}
		
	for (i=1, maior = valores[0]; i<5; i+=2){
		int temp = compara(valores[i], valores[i+1]);
		maior = compara(maior, temp);
	}
	printf("\n o maior e:\n %d",maior);
	
	return 0;
}
