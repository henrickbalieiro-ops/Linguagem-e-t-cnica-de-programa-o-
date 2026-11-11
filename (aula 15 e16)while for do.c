#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int i, j, n;

    /*
    1. LACO FOR
    
    O FOR(para) e utilizado quando sabemos quantas vezes
    queremos repetir um conjunto de instrucoes.
	iniciacao, verificacao, incremento
	
    Possui tres partes:
    - Inicializacao: define o valor inicial.
    - Condicao: determina quando o laco termina.
    - Incremento: altera o valor da variavel.
    
    -i++: adiciona 1          0 - 1
    -j--: diminui 1           1 - 0
    
    -i<10: passou de 10, codigo para
    */

    printf("\n===== LACO FOR =====\n");

    for(i = 0, j = 1; i < 10; i++, j--) {                           
        printf("i = %d | j = %d\n", i, j);
    }


    /*
    2. LACO WHILE

    O WHILE (enquanto) verifica uma condicao antes
    de executar as instrucoes.

    Enquanto a condicao for verdadeira, o laco
    continuara repetindo.
    
    while: significa enquanto.
	i: é a variável que estamos verificando.
	<: significa menor que.
	10: é o limite da condição
    */

    printf("\n===== LACO WHILE =====\n");

	i = 0;

	while(i < 10) {
    printf("%d - EU AMO PAGAR IMPOSTO\n", i);

    i++;
	}


    /*
    3. LACO DO

    O DO(faca) WHILE executa primeiro as instrucoes e
    depois verifica a condicao.

	nn testa, inverso while
    Diferentemente do WHILE, ele executa pelo menos
    uma vez, mesmo que a condicao seja falsa.
    */

    printf("\n===== LACO DO WHILE =====\n");

    i = 0;
    n = 0;

    do {
        printf("%d - Laco DO WHILE\n", i);

        if(n % 2 == 0) {
            i++;
        }

        n++;

    } while(i < 10);


    //EXERCICIO 1
    
    printf("\n===== EXERCICIO 1 =====\n");

    int primeiro, segundo, passo;

    printf("Digite o primeiro valor: ");
    scanf("%d", &primeiro);

    printf("Digite o segundo valor: ");
    scanf("%d", &segundo);

    printf("Digite o passo da contagem: ");
    scanf("%d", &passo);

    if(passo > 0 && primeiro <= segundo) {

        for(i = primeiro; i <= segundo; i += passo) {
            printf("%d ", i);
        }

    } else {
        printf("Valores invalidos para a contagem.");
    }

    printf("\n");

   
    //EXERCICIO 2
    
     printf("\n===== EXERCICIO 2 =====\n");

	int opcao;

    do {
        printf("EU AMO PAGAR IMPOSTO!!!!!\n");

        printf("Deseja repetir a mensagem?\n");
        printf("1 - Sim\n");
        printf("0 - Nao\n");
        scanf("%d", &opcao);

    } while(opcao == 1);

    printf("Programa encerrado!\n");
    
    return 0;
}
