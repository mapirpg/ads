// 1) Preencher um vetor de inteiros
// Criar um programa que leia do usuario o tamanho de um vetor a ser alocado, e
// faça a alocação dinamica de memoria em um ponteiro numérico.
// Em seguida, uma função vai solicitar o primeiro numero do vetor e preencher
// todo o vetor, somando sempre dois (2) ao numero anterior.
// Imprima, ao final, todo o vetor preenchido

#include <stdio.h>
#include <stdlib.h>

int solicitarTamanho(int *tamanho) {
    printf("Digite o tamano do vetor a ser alocado");
    scanf("%d", &(*tamanho));
}

int main () {
    int *vetor;
    int tamanho = 0;


    solicitarTamanho(&tamanho);
    vetor = (int *) malloc(sizeof(int) * tamanho);

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i + 2;
        printf("%d\n", vetor[i]);
    }

    return 0;
}
