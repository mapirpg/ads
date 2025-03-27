#include <stdio.h>

int main() {
    // Faça um algorítmo que leia o salário de 150 pessoas e mostre
    // a) a média salarial
    // b) quantas pessoas ganham acima de um salário mínimo

    float salario;
    float somaSalario = 0;
    float mediaSalario = 0;
    int maiorQueSM = 0;

    for (int x = 1; x <= 3; x++) {
        printf("Digite o valor do salário %d: ", x);
        scanf("%f", &salario);
        somaSalario += salario;

        if (salario > 1412) {
            maiorQueSM++;
        }
    }

    mediaSalario = (float)somaSalario / 3;
    printf("Média dos salários: %f", mediaSalario);
    printf("\nQuantidade que recebem mais que 1 salário mínimo: %d ", maiorQueSM);

    return 0;
}