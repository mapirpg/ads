#include<stdio.h>
int main() {

    //Crie um algoritmo que leia dois valores A e B e troque os valores das variáveis de forma que A passe a ter o valor de B e B passe a ter o valor de A. Após a troca, o algoritmo deve exibir os novos valores de A e B.
    // Exemplo:
    // Antes...: A=2 B=3
    // Depois.: A=3 B=2.

    int A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%i", &A);
    printf("Digite o valor de B: ");
    scanf("%i", &B);

    temp = A;
    A = B;
    B = temp;

    printf("Depois da troca:\n");
    printf("A = %i\n", A);
    printf("B = %i\n", B);

    return 0;
}