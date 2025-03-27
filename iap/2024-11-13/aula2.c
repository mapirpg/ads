#include <stdio.h>

// Ler vários números até digitar 0
// Calcular quantos números foram digitados e calcular a media
int main() {

    int num;
    int tot = 0;
    int soma = 0;
    float media = 0;

    printf("Digite o número: "); // Ler antes
    scanf("%d", &num);

    while (num != 0) {
        tot++;
        soma += num;

        printf("Digite o número: ");
        scanf("%d", &num); // Ler no final
    }

    media = (float)soma / tot;

    printf("Total de números digitados: %d\n", tot);
    printf("Soma: %d\n", soma);
    printf("Média: %f\n", media);
    
    return 0;
};