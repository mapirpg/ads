#include<stdio.h>

int main() {
    // Escreva um algoritmo para ler o salário de um funcionário e aumentá-lo em 20%. Após o aumento, desconte 10% de impostos. Imprima o salário inicial, o salário com o aumento e o salário líquido (com desconto).

    float salario, salario_c_desconto, salario_c_aumento;
    float aumento = 0.2;
    float desonto = 0.1;

    printf("Digite o valor do salário para aplicar o aumento e sens respectivos descontos\n");
    scanf("%f", &salario);

    salario_c_aumento = salario + (salario * aumento);
    salario_c_desconto = salario_c_aumento - (salario_c_aumento * desonto);

    printf("Salário inicial\n: %2.f", salario);
    printf("\nSalário com aumento\n: %2.f", salario_c_aumento);
    printf("\nSalário líquido\n: %2.f", salario_c_desconto);

    return 0;
}