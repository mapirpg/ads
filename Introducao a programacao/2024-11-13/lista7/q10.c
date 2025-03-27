#include <stdio.h>

int main() {
    // Na usina de Angra dos Reis, os técnicos analisaram a perda de massa de um material radioativo. Sabendo-se que esse material perde 25% de sua massa a cada 30 segundos, faça um algoritmo que leia a massa de material em g e calcule em quanto tempo a massa do material se tornará menor que 0,1g.

    float massa = 0, tempo = 0;

    do {
        printf("Digite a massa do material em gramas: ");
        scanf("%f", &massa);

        if (massa <= 0) {
            printf("Massa inválida. Digite novamente.\n");
        }
    } while (massa <= 0);

    while (massa > 0.1) {
        massa -= massa * 0.25;
        tempo += 30;
    }

    printf("A massa do material se tornará menor que 0,1g em %.0f segundos.\n", tempo);

    return 0;
}