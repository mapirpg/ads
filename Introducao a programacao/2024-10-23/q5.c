#include<stdio.h>

int main() {
    // Escreva um algoritmo que calcule o desconto de um produto. O algoritmo deve solicitar o valor do produto e a porcentagem de desconto e exibir o valor do desconto e do novo valor do produto.

    float valor, porcentagem, desconto, resultado;

    printf("Digite o valor do produto\n");
    scanf("%f", &valor);
    printf("Digite o valor do desconto\n");
    scanf("%f", &porcentagem);

    desconto = porcentagem/100 * valor;
    resultado = valor - desconto;

    printf("Desconto: R$ %2.f\n", desconto);
    printf("O valor do produto com desconto é de R$ %2.f", resultado);

    return 0;
}