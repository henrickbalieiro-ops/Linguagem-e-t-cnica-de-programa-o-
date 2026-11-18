#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//EX1
	 int numeros[10];
    int i, j, aux;

    for(i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
//inverte valores

    printf("\nValores na ordem inversa:\n");
    for(i = 4; i >= 0; i--)
    {
        printf("%d\n", numeros[i]);
    }    
//maior p menor

	for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            // Se o número atual for menor que o próximo, troca os dois de lugar
            if(numeros[i] < numeros[j])
            {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    // Exibe do maior para o menor
    printf("\nValores do maior para o menor:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", numeros[i]);
    }
	
	//EX2
	
	//EX3
	int n, aux, mult=1;
	scanf("%d", &n);
	aux=0;
	
	while (n > 0){
		aux=aux+(n%2)*mult;
		n = n/2;
		mult=mult*10;
	}
	printf("%d", aux);
		
	//ler oa contrario da divisao
	
	//EX4
	//EX5
	//EX6
	//EX7
	return 0;
}
