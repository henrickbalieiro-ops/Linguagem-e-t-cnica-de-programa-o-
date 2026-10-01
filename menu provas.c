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

    	imc = peso / (altura * altura);  

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
			
		
		void exer2{
			
		int A = 6, B = 0, C = 0;   
    	int disco;

    	printf("Estado inicial: A=%d  B=%d  C=%d\n\n", A, B, C);
    
    	disco = 1;
    	A -= disco; C += disco;
    	printf("Move disco %d: A -> C\n", disco);
    	printf("A=%d  B=%d  C=%d\n\n", A, B, C);
   
    	disco = 2;
    	A -= disco; B += disco;
    	printf("Move disco %d: A -> B\n", disco);
    	printf("A=%d  B=%d  C=%d\n\n", A, B, C);
    
    	disco = 1;
    	C -= disco; B += disco;
    	printf("Move disco %d: C -> B\n", disco);
    	printf("A=%d  B=%d  C=%d\n\n", A, B, C);
   
    	disco = 3;
    	A -= disco; C += disco;
    	printf("Move disco %d: A -> C\n", disco);
    	printf("A=%d  B=%d  C=%d\n\n", A, B, C);
  
    	disco = 1;
    	B -= disco; A += disco;
    	printf("Move disco %d: B -> A\n", disco);
    	printf("A=%d  B=%d  C=%d\n\n", A, B, C);
  
    	disco = 2;
    	B -= disco; C += disco;
    	printf("Move disco %d: B -> C\n", disco);
    	printf("A=%d  B=%d  C=%d\n\n", A, B, C);
 
    	disco = 1;
    	A -= disco; C += disco;
    	printf("Move disco %d: A -> C\n", disco);
    	printf("A=%d  B=%d  C=%d\n\n", A, B, C);

    	printf("Torre resolvida! Todos os discos em C.\n");
}
		}

	void prova2 (){
		
		void exer0{
    	int i;
    	int encontrou = 0;

    	printf("Digite 4 numeros inteiros:\n");
    	for(i = 0; i < 4; i++) {
        	scanf("%d", &n[i]);
    	}

    	printf("Numeros impares que sao multiplos de 5:\n");
    	for(i = 0; i < 4; i++) {
       
        	if(n[i] % 2 != 0 && n[i] % 5 == 0) {
            	printf("%d ", n[i]);
            	encontrou = 1;
        	}
    	}

    	if(!encontrou) {
        	printf("Nenhum numero encontrado.\n");
    	} else {
        	printf("\n");
    	}
		}
		void exer1{
		int qtd_tot, capx, n_mochila;
		printf("informe a quantidade e a capacidade:\n");
		scanf("%d %d", &qtd_tot, &capx);
	
    	n_mochila = qtd_tot/capx;
    
    	printf("voce precisa de %d mochilas", n_mochila);
		}
		
		void exer2{
		float valor, resultado;
    	int cod_entrada, cod_saida;
    	int valido = 1;

    	printf("Digite o valor a ser convertido: ");
    	scanf("%f", &valor);
    	printf("Digite o codigo da unidade de entrada: ");
    	scanf("%d", &cod_entrada);
    	printf("Digite o codigo da unidade de saida: ");
    	scanf("%d", &cod_saida);

    	if(cod_entrada == 1 && cod_saida == 2) {          
        	resultado = valor * 1.8 + 32;
    	} else if(cod_entrada == 2 && cod_saida == 1) {   
        	resultado = (valor - 32) / 1.8;
    	} else if(cod_entrada == 1 && cod_saida == 3) {   
        	resultado = valor + 273.15;
    	} else if(cod_entrada == 3 && cod_saida == 1) {   
        	resultado = valor - 273.15;
    	}
    
    	else if(cod_entrada == 4 && cod_saida == 5) {      
        	resultado = valor / 1609.34;
    	} else if(cod_entrada == 5 && cod_saida == 4) {  
        	resultado = valor * 1609.34;
    	}
    
    	else if(cod_entrada == 8 && cod_saida == 9) {     
        	resultado = valor * 2.205;
    	} else if(cod_entrada == 9 && cod_saida == 8) {   
        	resultado = valor / 2.205;
    	}
    
    	else if(cod_entrada == 10 && cod_saida == 11) {   
        	resultado = valor / 1.609;
    	} else if(cod_entrada == 11 && cod_saida == 10) { 
        	resultado = valor * 1.609;
    	}
    	else {
        	printf("Unidade nao existe no sistema ou conversao invalida.\n");
        	valido = 0;
    	}

    	if(valido) {
        	printf("Valor convertido: %.4f\n", resultado);
    	}
			}
	}
	
	void prova3 (){
		
		void exer0{

    	int i;
    	int encontrou = 0;

    	printf("Digite 4 numeros inteiros:\n");
    	for(i = 0; i < 4; i++) {
        	scanf("%d", &n[i]);
    	}

    	printf("Numeros impares que sao multiplos de 5:\n");
    	for(i = 0; i < 4; i++) {
        // Ímpar: n % 2 != 0   e   múltiplo de 5: n % 5 == 0
        	if(n[i] % 2 != 0 && n[i] % 5 == 0) {
            	printf("%d ", n[i]);
            	encontrou = 1;
        	}
    	}

    	if(!encontrou) {
        	printf("Nenhum numero encontrado.\n");
    	} else {
        	printf("\n");
    	}
			}
		
		void exer1{
		int total_itens, capacidade;
    	int mochilas_cheias;

    	printf("Digite a quantidade total de itens: ");
    	scanf("%d", &total_itens);
    	printf("Digite a capacidade maxima de cada mochila: ");
    	scanf("%d", &capacidade);

    	mochilas_cheias = total_itens / capacidade;   // divisão inteira

    	printf("Numero de mochilas totalmente preenchidas: %d\n", mochilas_cheias);
	}
			
		
		void exer2{
		float valor, resultado;
    	int cod_entrada, cod_saida;
    	int valido = 1;

    	printf("Digite o valor a ser convertido: ");
    	scanf("%f", &valor);
    	printf("Digite o codigo da unidade de entrada: ");
    	scanf("%d", &cod_entrada);
    	printf("Digite o codigo da unidade de saida: ");
    	scanf("%d", &cod_saida);

    // Temperatura
    	if(cod_entrada == 1 && cod_saida == 2) {          // C -> F
        	resultado = valor * 1.8 + 32;
    	} else if(cod_entrada == 2 && cod_saida == 1) {   // F -> C
        	resultado = (valor - 32) / 1.8;
    	} else if(cod_entrada == 1 && cod_saida == 3) {   // C -> K
        	resultado = valor + 273.15;
    	} else if(cod_entrada == 3 && cod_saida == 1) {   // K -> C
        	resultado = valor - 273.15;
    	}
    // Comprimento
    	else if(cod_entrada == 4 && cod_saida == 5) {     // m -> mi
        	resultado = valor / 1609.34;
    	} else if(cod_entrada == 5 && cod_saida == 4) {   // mi -> m
        	resultado = valor * 1609.34;
    	}
    // Massa
    	else if(cod_entrada == 8 && cod_saida == 9) {     // kg -> lb
        	resultado = valor * 2.205;
    	} else if(cod_entrada == 9 && cod_saida == 8) {   // lb -> kg
        	resultado = valor / 2.205;
    	}
    // Velocidade
    	else if(cod_entrada == 10 && cod_saida == 11) {   // km/h -> mph
        	resultado = valor / 1.609;
    	} else if(cod_entrada == 11 && cod_saida == 10) { // mph -> km/h
        	resultado = valor * 1.609;
    	}
    	else {
        	printf("Unidade nao existe no sistema ou conversao invalida.\n");
        	valido = 0;
    	}

    	if(valido) {
        	printf("Valor convertido: %.4f\n", resultado);
    	}
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
