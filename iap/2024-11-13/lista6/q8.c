#include <stdio.h>

int main() {
    //Faça um algoritmo que leia um número N e calcule o seu fatorial.
    // N! = 1∗2∗3∗...∗( N −1)∗N\

    int N, fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %d", N, fatorial);

    return 0;
}