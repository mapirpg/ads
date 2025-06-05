#include <stdio.h>

void coletarDados(int *dados) {
    printf("Informe o codigo do produto: ");
    scanf("%d", &dados[0]);

    printf("Informe o valor unitario: ");
    scanf("%d", &dados[1]);

    printf("Informe a quantidade: ");
    scanf("%d", &dados[2]);

    printf("Informe o desconto: ");
    scanf("%d", &dados[3]);
}

void imprimirResultado(int *dados) {
    int total = dados[1] * dados[2];
    int descontoValor = (total * dados[3]) / 100;
    int totalGeral = total - descontoValor;

    printf("\n-------------------------------\n");
    printf("PRODUTO       : %d\n", dados[0]);
    printf("VALOR UNI     : %d\n", dados[1]);
    printf("QUANTIDADE    : %d\n", dados[2]);
    printf("TOTAL         : %d\n", total);
    printf("-------------------------------\n");
    printf("DESCONTO %d%% : %d\n", dados[3], descontoValor);
    printf("TOTAL GERAL   : %d\n", totalGeral);
    printf("-------------------------------\n");
}

int main() {
    int dados[4];
    int opcao;

    do {
        printf("\n1-Comprar  0-Sair\n");
        scanf("%d", &opcao);

        if(opcao == 1) {
            coletarDados(dados);
            imprimirResultado(dados);
        }

    } while(opcao != 0);

    return 0;
}
