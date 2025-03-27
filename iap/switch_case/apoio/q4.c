#include <stdio.h>

int main() {
    float numero1 = 0, numero2 = 0, resultado = 0;
    char operacao = ' ';

    printf("Digite a expressão aritmética no formato numero1 operação numero2: ");
    scanf("%f %c %f", &numero1, &operacao, &numero2);

    switch (operacao) {
        case '+':
            resultado = numero1 + numero2;
            printf("O resultado da expressão é %.2f\n", resultado);
            break;
        case '-':
            resultado = numero1 - numero2;
            printf("O resultado da expressão é %.2f\n", resultado);
            break;
        case '*':
            resultado = numero1 * numero2;
            printf("O resultado da expressão é %.2f\n", resultado);
            break;
        case '/':
            if (numero2 == 0) {
                printf("Divisão por zero.\n");
            } else {
                resultado = numero1 / numero2;
                printf("O resultado da expressão é %.2f\n", resultado);
            }
            break;
        default:
            printf("Operação inválida.\n");
    }

    return 0;

}