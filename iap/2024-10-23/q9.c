#include<stdio.h>

int main() {
    // Um caixa eletrônico opera somente com cédulas de 100, 50, 20, 10 e 5 reais.
    // Faça um algoritmo que leia um valor a sacar e calcule e mostre o menor número de cédulas de cada tipo no qual o valor pode ser decomposto.
    // Considere que o sistema admite somente valores múltiplos de 5.
 int valor_saque, valor_ajustado, resto;
    int notas_100, notas_50, notas_20, notas_10, notas_5;

    printf("Digite o valor do saque: ");
    scanf("%i", &valor_saque);

    // Calcular o múltiplo de 5 mais próximo
    resto = valor_saque % 5;
    valor_ajustado = valor_saque - resto;

    notas_100 = valor_ajustado / 100;
    valor_ajustado %= 100;

    notas_50 = valor_ajustado / 50;
    valor_ajustado %= 50;

    notas_20 = valor_ajustado / 20;
    valor_ajustado %= 20;

    notas_10 = valor_ajustado / 10;
    valor_ajustado %= 10;

    notas_5 = valor_ajustado / 5;
    valor_ajustado %= 5;

    printf("Quantidade de cédulas:\n");
    printf("100 reais: %i\n", notas_100);
    printf("50 reais: %i\n", notas_50);
    printf("20 reais: %i\n", notas_20);
    printf("10 reais: %i\n", notas_10);
    printf("5 reais: %i\n", notas_5);
    printf("Ainda sobram R$ %i,00 depois de dividir as cédulas\n", resto);

    return 0;
}