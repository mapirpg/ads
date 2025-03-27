#include <stdio.h>

int main() {
    // Um material altamente radioativo perde 0,1% da sua massa a cada segundo. Faça um algoritmo que leia a massa inicial, em gramas, e determine em quanto tempo essa massa se torna menor do que 1 grama. Mostre esse tempo no formato xh ymin zs. Ex.: 0h 37min 50s.

    float massa = 0, tempo = 0;

    do {
        printf("Digite a massa do material em gramas: ");
        scanf("%f", &massa);

        if (massa <= 0) {
            printf("Massa inválida. Digite novamente.\n");
        }
    } while (massa <= 0);

    while (massa > 1) {
        massa -= massa * 0.001;
        tempo++;
    }

    int horas = tempo / 3600;
    tempo -= horas * 3600;
    int minutos = tempo / 60;
    tempo -= minutos * 60;

    printf("A massa do material se tornará menor que 1g em %dh %dmin %ds.\n", horas, minutos, (int) tempo);

    return 0;
}