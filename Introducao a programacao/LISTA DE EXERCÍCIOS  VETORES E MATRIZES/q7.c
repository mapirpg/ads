#include <stdio.h>

#define T 365

int main() {
    float temperaturas[T];
    float soma = 0.0, media;
    float menorT, maiorT;
    int tMenorMedia = 0;

    // Ler a temperatura média de todos os T do T
    for (int i = 0; i < T; i++) {
        printf("Digite a temperatura média do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    // Calcular a temperatura média anual
    media = soma / T;

    // Inicializar menor e maior temperatura
    menorT = temperaturas[0];
    maiorT = temperaturas[0];

    // Encontrar a menor e maior temperatura do T
    for (int i = 1; i < T; i++) {
        if (temperaturas[i] < menorT) {
            menorT = temperaturas[i];
        }
        if (temperaturas[i] > maiorT) {
            maiorT = temperaturas[i];
        }
    }

    // Contar o número de T em que a temperatura foi inferior à média anual
    for (int i = 0; i < T; i++) {
        if (temperaturas[i] < media) {
            tMenorMedia++;
        }
    }

    // Escrever os resultados
    printf("Menor temperatura do T: %.2f\n", menorT);
    printf("Maior temperatura do T: %.2f\n", maiorT);
    printf("Temperatura média anual: %.2f\n", media);
    printf("Número de T com temperatura inferior à média anual: %d\n", tMenorMedia);

    return 0;
}