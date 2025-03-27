#include <stdio.h>
#define TAMANHO 20

int main() {
    // Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o
    // valor do menor elemento de Q e a respectiva posição que ele ocupa no vetor

    int Q[TAMANHO];
    int menor, posicao;

    // Ler o vetor Q de 20 posições, aceitando apenas números positivos
    for (int i = 0; i < TAMANHO; i++) {
        do {
            printf("Digite um número positivo para a posição %d: ", i + 1);
            scanf("%d", &Q[i]);
            if (Q[i] < 0) {
                printf("Número inválido! Por favor, digite um número positivo.\n");
            }
        } while (Q[i] < 0);
    }

    // Inicializar o menor elemento e sua posição
    menor = Q[0];
    posicao = 0;

    // Encontrar o menor elemento e sua posição
    for (int i = 1; i < TAMANHO; i++) {
        if (Q[i] < menor) {
            menor = Q[i];
            posicao = i;
        }
    }

    // Escrever o valor do menor elemento e a respectiva posição
    printf("O menor elemento de Q é %d e está na posição %d.\n", menor, posicao + 1);

    return 0;
}