#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_TRILHA 6
#define ESQUERDA 2
#define DIREITA 6
#define FOICE 7
#define MACHADO 9
#define BUMERANGUE 4


// MOSTRAR A TRILHA
void mostrarTrilha(char trilha[], int posJogador, int personagem)
{
    int i;

    printf("\nTrilha: [ ");

    for (i = 0; i < TAMANHO_TRILHA; i++)
    {
        if (i == posJogador)
            printf("%d ", personagem);
        else
            printf("%c ", trilha[i]);
    }

    printf("]\n");
}


// ESCOLHER PERSONAGEM
int escolherPersonagem()
{
    int personagem;

    printf("\nEscolha seu personagem:\n");
    printf("[1] Personagem 1\n");
    printf("[3] Personagem 3\n");

    do
    {
        printf("> ");
        scanf("%d", &personagem);

        if (personagem != 1 && personagem != 3)
            printf("Opcao invalida! Escolha 1 ou 3.\n");

    } while (personagem != 1 && personagem != 3);

    return personagem;
}


// ESCOLHER ARMA
int escolherArma()
{
    int arma;

    printf("\n====================================\n");
    printf("            ESCOLHA SUA ARMA\n");
    printf("====================================\n");

    printf("[7] Foice\n");
    printf("[9] Machado\n");
    printf("[4] Bumerangue\n");

    do
    {
        printf("> ");
        scanf("%d", &arma);

        if (arma != FOICE && arma != MACHADO && arma != BUMERANGUE)
            printf("Arma invalida! Escolha 7, 9 ou 4.\n");

    } while (arma != FOICE && arma != MACHADO && arma != BUMERANGUE);

    return arma;
}


// JOGAR NA TRILHA
int jogarNaTrilha(char trilha[], int posJogador, int posBinoculo,
                  int posTesouro, int personagem, int pontuacao)
{
    int movimento;
    int achouBinoculo = 0;
    int achouTesouro = 0;

    trilha[posBinoculo] = '8';

    printf("\n====================================\n");
    printf("          AVENTURA INICIADA!\n");
    printf("====================================\n");

    printf("Use %d para esquerda e %d para direita.\n", ESQUERDA, DIREITA);
    printf("Encontre o binoculo (8) para revelar o tesouro!\n");

    while (achouTesouro == 0)
    {
        mostrarTrilha(trilha, posJogador, personagem);

        printf("Posicao atual: %d\n", posJogador);
        printf("Escolha %d ou %d: ", ESQUERDA, DIREITA);
        scanf("%d", &movimento);

        if (movimento == ESQUERDA)
        {
            if (posJogador > 0)
            {
                posJogador--;
                printf("Voce andou para a esquerda.\n");
            }
            else
                printf("Voce ja esta no inicio da trilha!\n");
        }
        else if (movimento == DIREITA)
        {
            if (posJogador < TAMANHO_TRILHA - 1)
            {
                posJogador++;
                printf("Voce andou para a direita.\n");
            }
            else
                printf("Voce ja esta no final da trilha!\n");
        }
        else
            printf("Movimento invalido! Use 2 ou 6.\n");


        if (movimento == ESQUERDA || movimento == DIREITA)
        {
            if (achouBinoculo == 0 && posJogador == posBinoculo)
            {
                achouBinoculo = 1;
                trilha[posBinoculo] = '.';
                trilha[posTesouro] = 'X';

                printf("\nBINOCULO ENCONTRADO!\n");
                printf("O tesouro foi revelado!\n");
            }

            if (achouBinoculo == 1 && posJogador == posTesouro)
            {
                achouTesouro = 1;
                pontuacao += 50;

                printf("\nTESOURO ENCONTRADO!\n");
                printf("+50 pontos!\n");
                printf("Pontuacao atual: %d\n", pontuacao);
            }
        }
    }

    return pontuacao;
}


// BATALHA CONTRA A COBRA
int batalha(int pontuacao)
{
    int arma, dano;

    printf("\n====================================\n");
    printf("       UMA COBRA GIGANTE APARECEU!\n");
    printf("                    5\n");
    printf("====================================\n");

    arma = escolherArma();

    if (arma == MACHADO)
        dano = 30;
    else if (arma == FOICE)
        dano = 20;
    else
        dano = 15;

    printf("\nVoce atacou a cobra!\n");
    printf("Dano causado: %d\n", dano);

    pontuacao += dano;

    if (dano >= 20)
    {
        printf("\nA cobra foi derrotada!\n");
        printf("Voce venceu o jogo!\n");
    }
    else
    {
        printf("\nA cobra ficou ferida.\n");
        printf("Voce escapou com o tesouro!\n");
    }

    printf("\nPontuacao apos a batalha: %d\n", pontuacao);

    return pontuacao;
}


// PROGRAMA PRINCIPAL
int main()
{
    char trilha[TAMANHO_TRILHA] = {'.', '.', '.', '.', '.', '.'};

    int posJogador, posBinoculo, posTesouro;
    int personagem;
    int pontuacao = 0;

    srand(time(NULL));

    printf("====================================\n");
    printf("       JOGO DA CALCULADORA\n");
    printf("====================================\n");

    personagem = escolherPersonagem();

    // SORTEAR POSICOES
    posJogador = rand() % TAMANHO_TRILHA;

    posBinoculo = rand() % TAMANHO_TRILHA;

    while (posBinoculo == posJogador)
        posBinoculo = rand() % TAMANHO_TRILHA;

    posTesouro = rand() % TAMANHO_TRILHA;

    while (posTesouro == posJogador || posTesouro == posBinoculo)
        posTesouro = rand() % TAMANHO_TRILHA;


    printf("\nSeu personagem comecou na posicao %d.\n", posJogador);
    printf("O binoculo esta escondido na trilha.\n");
    printf("Encontre-o para revelar o tesouro!\n");

    pontuacao = jogarNaTrilha(trilha, posJogador, posBinoculo,
                              posTesouro, personagem, pontuacao);

    pontuacao = batalha(pontuacao);


    // RESULTADO FINAL
    printf("\n====================================\n");
    printf("          (=) RESULTADO FINAL\n");
    printf("====================================\n");

    printf("Pontuacao final: %d pontos\n", pontuacao);

    printf("====================================\n");
    printf("             FIM DO JOGO!\n");
    printf("====================================\n");

    return 0;
}
