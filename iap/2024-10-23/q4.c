#include<stdio.h>

int main() {
    // Escreva um algoritmo que calcule o aumento de um salário. O algoritmo deve solicitar o valor do salário e a porcentagem de aumento e exibir o valor do aumento e do novo salário.

    float salario, taxa, resultado;

    printf("Digite o valor do salário\n");
    scanf("%f", &salario);
    printf("Digite o percentual de aumento\n");
    scanf("%f", &taxa);

    resultado = salario + (taxa/100 * salario);
    printf("O valor do salário com aumentp é R$ %2.f", resultado);

    return 0;
}