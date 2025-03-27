#include <stdio.h>

int main() {
    //     Faça um algoritmo para ler o código de uma linha de ônibus de Gaspar e apresentar o nome da linha, de acordo com a lista abaixo. Se o código informado não estiver na lista informe a mensagem "Código inexistente".
    // 1 – Bela Vista
    // 2 – Figueira
    // 3 – Sta Terezinha

    int cod;

    printf("Digite o número da linha: ");
    scanf("%d", &cod);

    if (cod == 1) {
        printf("Bela Vista");
    } else if (cod == 2) {
        printf("Figueira");
    } else if (cod ==3) {
        printf("Sta Terezinha");
    } else {
        printf("Código inexistente");
    }

    return 0;
}