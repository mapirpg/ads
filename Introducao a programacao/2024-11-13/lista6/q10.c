#include <stdio.h>

int main(){
    // Faça um algoritmo que leia um valor inteiro N e mostre seus divisores.
    // Exemplo: N = 6. Divisores: 1, 2, 3 e 6.

    int N;

    printf("Digite um número: ");
    scanf("%d", &N);
    printf("Divisores de %d: ", N);
    
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}