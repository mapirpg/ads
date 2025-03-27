#include <stdio.h>

int main() {
    int diaValidade, mesValidade, anoValidade;
    int diaHoje, mesHoje, anoHoje;

    // Faça um algoritmo que leia a data de validade de um produto e leia também a data de hoje. Cada data deve ser lida usando três inteiros, representando dia, mês e ano. O algoritmo deve então mostrar na tela se o produto está vencido ou não.

    printf("Digite a data de validade do produto: ");
    scanf("%d %d %d", &diaValidade, &mesValidade, &anoValidade);

    printf("Digite a data de hoje: ");
    scanf("%d %d %d", &diaHoje, &mesHoje, &anoHoje);

    if (anoValidade < anoHoje) {
        printf("Produto vencido.");
    } else if (anoValidade == anoHoje) {
        if (mesValidade < mesHoje) {
            printf("Produto vencido.");
        } else if (mesValidade == mesHoje) {
            if (diaValidade < diaHoje) {
                printf("Produto vencido.");
            } else {
                printf("Produto ainda válido.");
            }
        } else {
            printf("Produto ainda válido.");
        }
    } else {
        printf("Produto ainda válido.");
    }

    return 0;
}
