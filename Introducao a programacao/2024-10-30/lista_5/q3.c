#include <stdio.h>

int main() {
    // Faça um algoritmo para ler o número referente a um dia da semana e imprimir a mensagem "Dia útil" ou "fim de semana", considerando que 1 = domingo, 2 = segunda-feira, ..., 7 = sábado. Caso o número não corresponda a um dia da semana, o algoritmo deve mostrar a mensagem "Número não corresponde a dia da semana".

    int dia;

    printf("Digite o dia da semana: ");
    scanf("%d", &dia);

    if (dia == 1 || dia == 7) {
        printf("Fim de seman");
    } else if (dia < 0 || dia > 7 ){
        printf("Não é dia da semna");
    } else {
        printf("Dia útil");
    }
}