#include <stdio.h>

#define TAMANHO 3

// Função para imprimir o tabuleiro
void imprimeTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < TAMANHO - 1) printf("|");
        }
        printf("\n");
        if (i < TAMANHO - 1) printf("---|---|---\n");
    }
}

// Função para verificar se há um ganhador
char verificaGanhador(char tabuleiro[TAMANHO][TAMANHO]) {
    // Verifica ganhador por linha
    for (int i = 0; i < TAMANHO; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ')
            return tabuleiro[i][0];
    }
    // Verifica ganhador por coluna
    for (int i = 0; i < TAMANHO; i++) {
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ')
            return tabuleiro[0][i];
    }
    // Verifica ganhador diagonal principal
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ')
        return tabuleiro[0][0];
    // Verifica ganhador diagonal secundária
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')
        return tabuleiro[0][2];
    // Verifica se houve empate
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == ' ')
                return ' ';
        }
    }
    return 'E'; // Empate
}

// Função para validar a jogada
int validaJogada(char tabuleiro[TAMANHO][TAMANHO], int linha, int coluna) {
    // Ajusta os índices para serem baseados em 0
    linha--;
    coluna--;
    if (linha < 0 || linha >= TAMANHO || coluna < 0 || coluna >= TAMANHO || tabuleiro[linha][coluna] != ' ')
        return 0;
    return 1;
}

int main() {
    char tabuleiro[TAMANHO][TAMANHO] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char jogadorAtual = 'X';
    int linha, coluna;
    char ganhador = ' ';

    // Início das jogadas
    while (ganhador == ' ') {
        imprimeTabuleiro(tabuleiro);
        printf("Jogador %c, digite a linha e a coluna (1, 2 ou 3) da sua jogada: ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);

        // Valida a jogada
        if (validaJogada(tabuleiro, linha, coluna)) {
            // Ajusta os índices para serem baseados em 0
            linha--;
            coluna--;
            tabuleiro[linha][coluna] = jogadorAtual;
            ganhador = verificaGanhador(tabuleiro);
            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
        } else {
            printf("Jogada inválida! Tente novamente.\n");
        }
    }

    imprimeTabuleiro(tabuleiro);

    if (ganhador == 'E') {
        printf("O jogo terminou em empate!\n");
    } else {
        printf("O jogador %c venceu!\n", ganhador);
    }

    return 0;
}