#include <stdio.h>

int main() {
    // Crie um algoritmo que leia a idade de um nadador e informe a categoria em que o mesmo se enquadra. A categoria é definida pela idade, a partir das seguintes faixas:
    // Infantil – 0 a 10 anos
    // Juvenil – 11 a 17 anos
    // Adulto – 18 a 64 anos
    // Sênior – 65 ou mais anos

    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade > 0 && idade <= 10) {
        printf("Categoria - Infantil");
    } else if (idade >= 11 && idade <= 17) {
        printf("Categoria - Juvenil");
    } else if (idade >= 18 && idade <= 64) {
        printf("Categoria - Adulto");
    } else {
        printf("Categoria - Sênior");
    }
}