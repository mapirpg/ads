#include <stdio.h>


void printLine(int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("=");
    }
    printf("\n");
}

int interval(int a, int b) {
    int soma = 0;
    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    for (int i = a; i <= b; i++) {
        soma += i;
    }
    
    return soma;
}

int main() {
    int opcao = -1;
    int num1, num2, resultado;
    
    while (opcao != 0) {
        printf("Digite 0 para encerrar ou qualquer outro número para continuar: ");
        scanf("%d", &opcao);
        
        if (opcao == 0) {
            break;
        }
        
        // Solicita dois números ao usuário
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        
        // Chama a função DesenhaLinha
        printLine(30);
        
        // Calcula e exibe o resultado da função Intervalo
        resultado = interval(num1, num2);
        printf("A soma dos números no intervalo [%d,%d] é: %d\n", num1, num2, resultado);
        
        // Chama a função DesenhaLinha novamente para melhorar a apresentação
        printLine(30);
        printf("\n");
    }
    
    printf("Programa encerrado.\n");
    return 0;
}