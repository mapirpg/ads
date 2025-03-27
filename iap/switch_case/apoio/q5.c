#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int computador = 0, usuario = 0;

    srand(time(NULL));
    computador = rand() % 3 + 1;

    printf("Digite um número de 1 a 3: ");
    scanf("%d", &usuario);

    switch (computador) {
        case 1: printf("Computador jogou: Pedra\n"); break;
        case 2: printf("Computador jogou: Papel\n"); break;
        case 3: printf("Computador jogou: Tesoura\n"); break;
    }

    switch (usuario) {
        case 1: printf("Você jogou: Pedra\n"); break;
        case 2: printf("Você jogou: Papel\n"); break;
        case 3: printf("Você jogou: Tesoura\n"); break;
    }

    if (computador == usuario) {
        printf("Empate\n");
    } else if (computador == 1 && usuario == 2) {
        printf("Você Ganhou: Papel embrulha Pedra\n");
    } else if (computador == 1 && usuario == 3) {
        printf("Computador Ganhou: Pedra quebra Tesoura\n");
    } else if (computador == 2 && usuario == 1) {
        printf("Computador Ganhou: Papel embrulha Pedra\n");
    } else if (computador == 2 && usuario == 3) {
        printf("Você Ganhou: Tesoura corta Papel\n");
    } else if (computador == 3 && usuario == 1) {
        printf("Você Ganhou: Pedra quebra Tesoura\n");
    } else if (computador == 3 && usuario == 2) {
        printf("Computador Ganhou: Tesoura corta Papel\n");
    }

    return 0;
}