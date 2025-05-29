#include <stdio.h>
#define TAMANHO 20


int main() {

    // Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o
    // valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor

    int Q[N];
    int maior, posicao;

    // Ler o vetor Q de 20 posições, aceitando apenas números positivos
    for (int i = 0; i < N; i++) {
        do {
            printf("Digite um número positivo para a posição %d: ", i + 1);
            scanf("%d", &Q[i]);
            if (Q[i] < 0) {
                printf("Número inválido! Por favor, digite um número positivo.\n");
            }
        } while (Q[i] < 0);
    }

    // Inicializar o maior elemento e sua posição
    maior = Q[0];
    posicao = 0;

    // Encontrar o maior elemento e sua posição
    for (int i = 1; i < N; i++) {
        if (Q[i] > maior) {
            maior = Q[i];
            posicao = i;
        }
    }

    // Escrever o valor do maior elemento e a respectiva posição
    printf("O maior elemento de Q é %d e está na posição %d.\n", maior, posicao + 1); 

    return 0
}