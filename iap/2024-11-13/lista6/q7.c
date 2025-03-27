#include <stdio.h>

int main() {
    // Faça um algoritmo que leia o sexo (M/F) e a idade de 500 pessoas e que apresente ao final a porcentagem de pessoas de cada sexo e a média de idade de cada sexo.

    int idade, totalM = 0, totalF = 0, somaIdadeM = 0, somaIdadeF = 0;
    float percM, percF, mediaIdadeM, mediaIdadeF;
    char sexo;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o sexo da pessoa %d (M/F): ", i);
        scanf(" %c", &sexo);
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        if (sexo == 'M') {
            totalM++;
            somaIdadeM += idade;
        } else {
            totalF++;
            somaIdadeF += idade;
        }
    }

    percM = ((float)totalM / 5) * 100;
    percF = ((float)totalF / 5) * 100;
    mediaIdadeM = (float)somaIdadeM / totalM;
    mediaIdadeF = (float)somaIdadeF / totalF;

    printf("Porcentagem de pessoas do sexo masculino: %.2f%%\n", percM);
    printf("Porcentagem de pessoas do sexo feminino: %.2f%%\n", percF);
    printf("Média de idade do sexo masculino: %.2f\n", mediaIdadeM);
    printf("Média de idade do sexo feminino: %.2f\n", mediaIdadeF);

    return 0;
    
}