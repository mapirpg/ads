#include <stdio.h>

int main() {
    // Faça um algoritmo que leia a altura de 50 atletas, armazenando-os em um vetor. A seguir, imprima uma relação numerada das alturas.

    // Exemplo de saída:
    // Altura 1: 1.86 m
    // Altura 2: 1.70 m ...
    // ...
    // Altura 50: 1.90 m


    int num_atletas = 50;
    float alturas[num_atletas];

    for (int i = 0; i < num_atletas; i++) {
        printf("Digite a altura do atleta %d: ", i + 1);
        scanf("%f", &alturas[i]);
    }

    for (int i = 0; i < num_atletas; i++) {
        printf("Altura do atleta %d: %.2f m \n", i + 1, alturas[i]);
    }
    
    return 0;
}