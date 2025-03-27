#include <stdio.h>

int main() {
    //Para passar de fase na UC Programação, o aluno precisa ter média final maior ou igual a 6 e número de faltas menor do que 21. Faça um algoritmo que leia 3 notas obtidas por um aluno na UC Programação e o número de faltas, e calcule e mostre a média final. Após isso, o  algoritmo deve informar se o aluno está aprovado ou reprovado. Caso o aluno esteja reprovado, o algoritmo deve informar se a reprovação foi por média e/ou por faltas.
    // Exemplos de saídas esperadas: Aprovado / Reprovado por média / Reprovado por falta / Reprovado por média e falta

    float nota1, nota2, nota3, media;
    int faltas;

    printf("Digite a primeira nota ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota ");
    scanf("%f", &nota3);

    printf("Digite a quantidade de faltas ");
    scanf("%d", &faltas);

    media = (nota1 + nota2 + nota3) / 3;

    if (faltas > 20 && media < 6) {
        printf("Aluno reprovado por nota e faltas");
    } else if (faltas > 20) {
        printf("Aluno reprovado por faltas");
    } else if (media < 6) {
        printf("Aluno reprovado por nota");
    } else {
        printf("Aluno aprovado");
    }
}