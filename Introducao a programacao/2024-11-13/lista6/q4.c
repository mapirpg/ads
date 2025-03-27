#include <stdio.h>

int main() {
    // Faça um algoritmo que leia o peso e a altura de um grupo de 1000 pessoas e informe o peso médio e a altura média desse grupo.

    int repeticoes = 3;

    float peso = 0;
    float altura = 0;
    float somaPeso = 0;
    float somaAltura = 0;
    float mediaPeso = 0;
    float mediaAltura = 0;

    for (int x = 1; x <= repeticoes; x += 1) {
        printf("Digite peso e altura da pessoa %d: ", x);
        scanf("%f %f", &peso, &altura);

        somaPeso += peso;
        somaAltura += altura;
    }

    mediaPeso = somaPeso / repeticoes;
    mediaAltura = somaAltura / repeticoes;

    printf("Média de peso: %f", mediaPeso);
    printf("\nMédia de altura: %f", mediaAltura);

    return 0;
}