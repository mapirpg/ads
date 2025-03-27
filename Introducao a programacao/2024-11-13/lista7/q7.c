#include <stdio.h>

int main() {
    // Faça um algoritmo que leia o peso e a altura de várias pessoas até que seja digitado um valor negativo para o último peso. Após a leitura dos dados, o algoritmo deve informar o peso e a altura média dos valores lidos.

    float peso, altura, pesoTotal = 0, alturaTotal = 0;
    int count = 0;

    do {
        printf("Digite o peso: ");
        scanf("%f", &peso);

        if (peso < 0) {
            break;
        }

        printf("Digite a altura: ");
        scanf("%f", &altura);

        if (altura < 0) {
            printf("Altura inválida. Digite novamente.\n");
        } else {
            pesoTotal += peso;
            alturaTotal += altura;
            count++;
        }
    } while (peso >= 0);

    printf("Peso médio: %.2f\n", pesoTotal / count);

    if (count > 0) {
        printf("Altura média: %.2f\n", alturaTotal / count);
    }

    return 0;
    
}