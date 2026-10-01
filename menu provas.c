#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	void prova1 (){
		
		void exer0{
		int a, b, c, d, e;
		printf("isira 5 valores: \n");
		scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
		}
		
		void exer1{
		float peso, altura, imc;
    	printf("Digite o peso (kg): ");
    	scanf("%f", &peso);
    	printf("Digite a altura (m): ");
    	scanf("%f", &altura);

    	imc = peso / (altura * altura);   // IMC = peso / altura²

    	printf("IMC = %.2f - ", imc);

    	if(imc < 18.5) {
        	printf("Abaixo do peso\n");
    	} else if(imc >= 18.5 && imc <= 24.9) {
        	printf("Normal\n");
    	} else if(imc >= 25.0 && imc <= 29.9) {
        	printf("Acima do peso\n");
    	} else { // imc >= 30.0
        	printf("Obeso\n");
    	}
    	
	}
			}
		
		void exer2{
		}
		
	}

	void prova2 (){
		
		void exer0{
		int a, b, c, d;
		printf("insira 4 valores: \n");
		scanf("%d%d%d%d", a&, b&, &c, &d);
		}
		
		void exer1{
		int qtd_tot, capx, n_mochila;
		printf("informe a quantidade e a capacidade:\n");
		scanf("%d %d", &qtd_tot, &capx);
	
    	n_mochila = qtd_tot/capx;
    
    	printf("voce precisa de %d mochilas", n_mochila);
		}
		
		void exer2{
		}
	}
	
	void prova3 (){
		
		void exer0{
		}
	}




int main(int argc, char *argv[]) {
	
	int op;
	printf("qual prova vc quer resolver: [1|2|3]\n ");
	scanf("%d", &op);
	
	switch(op){
	}
		
	return 0;
}
