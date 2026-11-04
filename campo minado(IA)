
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define bandeira 9
#define bomba -1

int main(int argc, char *argv[]) {

    srand(time(NULL));

    int campo[9][9];
    int visivel[9][9] = {0};

    int casaX, casaY;
    int i, j, x, y;
    int cont;
    int jogadas = 0;
    int totalBombas = 10;
    int perdeu = 0;

    // Inicializa o campo
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9; j++) {
            campo[i][j] = 0;
        }
    }

    // Distribui exatamente 10 bombas
    cont = 0;

    while(cont < totalBombas) {

        i = rand() % 9;
        j = rand() % 9;

        if(campo[i][j] != bomba) {
            campo[i][j] = bomba;
            cont++;
        }
    }

    // Calcula as bombas vizinhas
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9; j++) {

            if(campo[i][j] != bomba) {

                cont = 0;

                for(x = -1; x <= 1; x++) {
                    for(y = -1; y <= 1; y++) {

                        int nx = i + x;
                        int ny = j + y;

                        if(nx >= 0 && nx < 9 &&
                           ny >= 0 && ny < 9) {

                            if(campo[nx][ny] == bomba) {
                                cont++;
                            }
                        }
                    }
                }

                campo[i][j] = cont;
            }
        }
    }

    // Jogo
    while(perdeu == 0 && jogadas < 71) {

        printf("\n===== CAMPO MINADO =====\n");

        printf("  ");
        for(j = 0; j < 9; j++) {
            printf("%d ", j);
        }

        printf("\n");

        for(i = 0; i < 9; i++) {

            printf("%d ", i);

            for(j = 0; j < 9; j++) {

                if(visivel[i][j] == 1) {
                    printf("%d ", campo[i][j]);
                } else {
                    printf("# ");
                }
            }

            printf("\n");
        }

        printf("\nLinha: ");
        if(scanf("%d", &casaX) != 1) {
            printf("Entrada invalida!\n");
            return 1;
        }

        printf("Coluna: ");
        if(scanf("%d", &casaY) != 1) {
            printf("Entrada invalida!\n");
            return 1;
        }

        // Verifica coordenadas
        if(casaX < 0 || casaX >= 9 ||
           casaY < 0 || casaY >= 9) {

            printf("Coordenadas invalidas!\n");
            continue;
        }

        // Verifica casa repetida
        if(visivel[casaX][casaY] == 1) {
            printf("Essa casa ja foi aberta!\n");
            continue;
        }

        visivel[casaX][casaY] = 1;

        // Verifica bomba
        if(campo[casaX][casaY] == bomba) {

            perdeu = 1;
            printf("\nBOOOOM! Voce perdeu!\n");

        } else {

            jogadas++;
            printf("\nCasa segura!\n");
        }
    }

    // Resultado
    if(perdeu == 0) {
        printf("\nPARABENS! VOCE VENCEU!\n");
    }

    // Mostra o campo completo
    printf("\n===== CAMPO COMPLETO =====\n");

    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9; j++) {

            if(campo[i][j] == bomba) {
                printf("B ");
            } else {
                printf("%d ", campo[i][j]);
            }
        }

        printf("\n");
    }

    return 0;
}

