#include <stdio.h>

int main() {
    // Faça um algoritmo que determine quanto será gasto para encher o tanque de um veículo. Considere que o preço do etanol é de R$ 5,99, o preço do diesel é de R$ 6,589 e o preço da gasolina é de R$ 6,99. O algoritmo deve ler a capacidade do tanque (em litros) e o tipo de combustível (E - Etanol, D - Diesel ou G - Gasolina) e exibir o valor gasto para encher o tanque do veículo.

    float tanque, valorGasto;
    int tipoCombustivel;

    float precoEtanol = 5.99;
    float precoDiesel = 6.589;
    float precoGasolina = 6.99;

    printf("Digite a capacidade do tanque: ");
    scanf("%f", &tanque);
    
    printf("Digite o tipo de combustível: ");
    scanf("%d", &tipoCombustivel);

    if (tipoCombustivel == 1) {
        valorGasto = tanque * precoEtanol;
        printf("Valor gasto para encher o tanque com Etanol: R$ %.2f: ", valorGasto);
    } else if (tipoCombustivel == 2) {
        valorGasto = tanque * precoDiesel;
        printf("Valor gasto para encher o tanque com Diesel: R$ %.2f: ", valorGasto);
    } else if (tipoCombustivel == 3) {
        valorGasto = tanque * precoGasolina;
        printf("Valor gasto para encher o tanque com Gasolina: R$ %.2f: ", valorGasto);
    } else {
        printf("Tipo de combustível inválido! Digite 1, 2 ou 3.\n");
    }

    return 0;
}
