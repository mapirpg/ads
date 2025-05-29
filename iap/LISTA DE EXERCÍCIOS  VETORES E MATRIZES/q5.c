#include <stdio.h>

#define TAMANHO 20

int main() {
    // Faça um algoritmo para ler 20 números e armazenar em um vetor. Após a leitura total dos 20
    // números, o algoritmo deve escrever esses 20 números lidos na ordem inversa.

    int numeros[N];

    // Ler 20 números e armazenar em um vetor
    for (int i = 0; i < N; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Escrever os 20 números lidos na ordem inversa
    printf("Números na ordem inversa:\n");
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}