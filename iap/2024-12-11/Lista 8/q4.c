#include <stdio.h>


int main() {
    int num_pessoas = 30;
    float alturas[num_pessoas];
    float soma = 0.0, media;
    int acima_da_media = 0;

    for (int i = 0; i < num_pessoas; i++) {
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &alturas[i]);
        soma += alturas[i];
    }

    media = soma / num_pessoas;

    for (int i = 0; i < num_pessoas; i++) {
        if (alturas[i] > media) {
            acima_da_media++;
        }
    }

    printf("Altura média: %.2f\n", media);
    printf("Quantidade de pessoas acima da altura média: %d\n", acima_da_media);

    return 0;
}