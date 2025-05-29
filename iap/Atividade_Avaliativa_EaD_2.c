#include <stdio.h>

#define N 3

int main() {
    char tabuleiro[N][N] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char jogadorAtual = 'X', ganhador = ' ';
    int linha, coluna, jogadaValida, jogoFinalizado;

    while (ganhador == ' ') {
        printf("Tabuleiro:\n");
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf(" %c ", tabuleiro[i][j]);
                if (j < N - 1) printf("|");
            }
            printf("\n");
            if (i < N - 1) printf("---|---|---\n");
        }

        printf("Jogador %c, digite a linha e a coluna (1, 2 ou 3) da sua jogada: ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);

        linha--;
        coluna--;

        if (linha < 0 || linha >= N || coluna < 0 || coluna >= N || tabuleiro[linha][coluna] != ' '){
            jogadaValida = 0;
        } else {
            jogadaValida = 1;
        }

        if (jogadaValida) {
            tabuleiro[linha][coluna] = jogadorAtual;

            // verifica se ganhou por linha ou coluna
            for (int i = 0; i < N; i++) {
                if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ') {
                    ganhador = tabuleiro[i][0];
                } else if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ') {
                    ganhador = tabuleiro[0][i];
                }
            }

            // verifica se ganhou diagonal esquerda
            if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ') {
                ganhador = tabuleiro[0][0];
            }

            // verifica se ganhou diagonal direita
            if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ') {
                ganhador = tabuleiro[0][2];
            }

            if (ganhador == ' ') {
                ganhador;
            }

            if (
                tabuleiro[0][0] != ' ' && 
                tabuleiro[0][1] != ' ' && 
                tabuleiro[0][2] != ' ' && 
                tabuleiro[1][0] != ' ' && 
                tabuleiro[1][1] != ' ' &&
                tabuleiro[1][2] != ' ' &&
                tabuleiro[2][0] != ' ' && 
                tabuleiro[2][1] != ' ' && 
                tabuleiro[2][2] != ' '
            ) {
                ganhador = 'E';
            }

            // verifica se empate
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (tabuleiro[i][j] == ' ') {
                        ganhador = ' ';
                    }
                }
            } 

           // X |  |
           //   |  |
           //   |  |
           
            if (jogadorAtual == 'X') {
                jogadorAtual = 'O';
            } else {
                jogadorAtual = 'X';
            }
        } else {
            printf("Jogada inválida! Tente novamente.\n");
        }
    }

    printf("Tabuleiro:\n");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < N - 1) printf("|");
        }
        printf("\n");
        if (i < N - 1) printf("---|---|---\n");
    };

    if (ganhador == 'E') {
        printf("O jogo terminou em empate!\n");
    } else {
        printf("O jogador %c venceu!\n", ganhador); // x
    }

    return 0;
}