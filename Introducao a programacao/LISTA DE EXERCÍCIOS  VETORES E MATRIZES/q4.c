#include <stdio.h>

#define TAMANHO 10

int main() {
    // Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X.
    // Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X.
    // Logo após, imprimir o vetor M

    int A[TAMANHO];
    int M[TAMANHO];
    int X;

    // Ler o vetor A de 10 números
    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite o número para a posição %d do vetor A: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Ler mais um número e guardar em uma variável X
    printf("Digite um número para a variável X: ");
    scanf("%d", &X);

    // Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X
    for (int i = 0; i < TAMANHO; i++) {
        M[i] = A[i] * X;
    }

    // Imprimir o vetor M
    printf("Vetor M:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", M[i]);
    }
    printf("\n");

    return 0;
}