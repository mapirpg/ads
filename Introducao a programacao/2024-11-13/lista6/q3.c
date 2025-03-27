#include <stdio.h>

int main() {
    // Sem usar o comando SE, calcule a soma de todos os números pares entre 1 e 1000.  

    int soma = 0;

    for (int x = 2; x <= 1000; x += 2) {
        soma += x;
    }

    printf("Resultado: %d", soma);

    return 0;
}