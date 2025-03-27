#include <stdio.h>

int main() {
    // Faça um programa para ler o ano de nascimento de duas pessoas. Ao final o programa deve dizer quem é o mais velho ou se têm a mesma idade

    int num1, num2;

    printf("Digite o nascimento da primeira pessoa: ");
    scanf("%d", &num1);

    printf("Digite o nascimento da segunda pessoa: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("As pessoas tem a mesma idade");
    } else if (num1 < num2) {
        printf("A primeira pessoa é mais velha.");
    } else {
        printf("A segunda pessoa é mais velha");
    }

    return 0;
}