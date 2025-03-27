#include <stdio.h>

int main() {
    // Construa um algoritmo que leia 50 números e depois exiba-os na ordem inversa de que foram lidos.

        int repeticoes = 50;
    float numeros[repeticoes];

    for (int i = 0; i < repeticoes; i++) {
        printf("Digite %d° número: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for (int i = 0; i < repeticoes; i++) {
        printf("%.2f\n", numeros[repeticoes - i - 1]);
    }
    
    return 0;
}