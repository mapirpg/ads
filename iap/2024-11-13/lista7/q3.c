#include <stdio.h>

int main() {
    // Uma organização deseja traçar um perfil dos seus participantes. Para isso foi coletado apenas a Idade e o Sexo (M/F) de cada participante. A leitura dos dados se encerra quando a idade informada for negativa. Assim, determine:
    // a) a média de idade dos homens
    // b) a média de idade das mulheres
    // c) o percentual de homens entre 25 e 33 anos
    // d) o percentual de mulheres entre 18 e 25 anos
    // e) a idade do homem mais idoso
    // f) a idade da mulher mais idosa

    int idade, totalH = 0, totalM = 0, somaIdadeH = 0, somaIdadeM = 0, idadeHomemMaisIdoso = 0, idadeMulherMaisIdosa = 0;

    float mediaIdadeH, mediaIdadeM, percH, percM;

    char sexo;

    do {
        printf("Digite o sexo da pessoa (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'M') {
            totalH++;
        } else if (sexo == 'F') {
            totalM++;
        } else {
            break;
        }

        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        if (sexo == 'M') {
            somaIdadeH += idade;

            if (idade > idadeHomemMaisIdoso) {
                idadeHomemMaisIdoso = idade;
            }
        } else {
            somaIdadeM += idade;

            if (idade > idadeMulherMaisIdosa) {
                idadeMulherMaisIdosa = idade;
            }
        }
    } while (idade >= 0);

    mediaIdadeH = (float)somaIdadeH / totalH;
    mediaIdadeM = (float)somaIdadeM / totalM;
    percH = ((float)totalH / (totalH + totalM)) * 100;
    percM = ((float)totalM / (totalH + totalM)) * 100;

    printf("Média de idade dos homens: %.2f\n", mediaIdadeH);
    printf("Média de idade das mulheres: %.2f\n", mediaIdadeM);
    printf("Percentual de homens entre 25 e 33 anos: %.2f%%\n", percH);
    printf("Percentual de mulheres entre 18 e 25 anos: %.2f%%\n", percM);
    printf("Idade do homem mais idoso: %d\n", idadeHomemMaisIdoso);
    printf("Idade da mulher mais idosa: %d\n", idadeMulherMaisIdosa);

    return 0;
}