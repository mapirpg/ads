#include <stdio.h>

int main() {
    int T;

    // Passo 1: Ler o valor N
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &T);

    // Passo 2: Declarar os vetores A, B e Soma
    int A[T];
    int B[T];
    int Soma[T];

    // Passo 3: Ler os elementos do vetor A
    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < T; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    // Passo 3: Ler os elementos do vetor B
    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < T; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    // Passo 4: Calcular a soma dos elementos dos vetores A e B e armazenar no vetor Soma
    for (int i = 0; i < T; i++) {
        Soma[i] = A[i] + B[i];
    }

    // Passo 5: Escrever o vetor Soma
    printf("Vetor Soma:\n");
    for (int i = 0; i < T; i++) {
        printf("Soma[%d]: %d\n", i, Soma[i]);
    }

    return 0;
}