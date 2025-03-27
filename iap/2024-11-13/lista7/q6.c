#include <stdio.h>

int main() {
    // Faça um algoritmo que leia altura e o sexo (M/F) de várias pessoas, até que seja digitado X para o último sexo lido. Ao final, apresentar a altura média das pessoas do sexo feminino e do sexo masculino.

    float altura, alturaFeminino = 0, alturaMasculino = 0;
    char sexo;

    do {
        printf("Digite a altura: ");
        scanf("%f", &altura);

        if (altura < 0) {
            printf("Altura inválida. Digite novamente.\n");
        }
    } while (altura < 0);

    do {
        printf("Digite o sexo (F/M): ");
        scanf(" %c", &sexo);

        if (sexo != 'F' && sexo != 'M') {
            printf("Sexo inválido. Digite novamente.\n");
        } else {
            if (sexo == 'F') {
                alturaFeminino += altura;
            } else {
                alturaMasculino += altura;
            }
        }
    } while (sexo != 'X');

    printf("Altura média das pessoas do sexo feminino: %.2f\n", alturaFeminino);
    printf("Altura média das pessoas do sexo masculino: %.2f\n", alturaMasculino);

    return 0;
}