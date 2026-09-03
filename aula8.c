#include <stdio.h>
#include <stdlib.h>

/*




*/

void exec3 (){
 
	float cota, real;
	printf("insira a cotacao e o valor:\n");
	scanf("%f %f", &real, &cota);
	printf("os %f reais sao %f dolar", real, (real/cota));
	
}

void exec4 (){

	float tempC,tempF;
	printf("insira a cotacao e o valor: \n");
	scanf("%f", &tempC);
	tempF = tempC * (9.0/5.0) + 32.0;
	printf("os %f G equivale a %f F", tempC, tempF);
 	
	
}

void exec8 (){	
 
	int segundo, horas, min;
	printf("insira o tempo em segundos: \n");
	scanf("%d", &segundo);
	horas = segundo/3600;
	min = (segundo - (segundo%3600))/60;
	segundo = segundo - ((horas * 3600)+(min*60));
	printf("\t %d:%d:%d",horas, min, segundo);

	
	
}







int main(int argc, char *argv[]) {
	
	int op;
	printf("qual exercicio voce quer resolver?: [3|4|8]\n ");
	scanf("%d", &op);
	
	switch(op){

case 8:
exec8 ();
break;

case 4:
exec4 ();
break;

case 3:
exec3 ();	
break;
}
	
	return 0;
}
