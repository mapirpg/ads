#include <stdio.h>

int main() {
    // Faça um algoritmo que leia um valor inteiro N, a qual corresponde a quantidade de idades que serão lidas em seguida. Após a leitura das idades mostre:
    // a) média das idades
    // b) o percentual de pessoas com menos de 18 anos
    // c) o percentual de pessoas com idade de 18 a 22 anos.
    // d) o percentual de pessoas com mais de 22 anos.

    int N, idade, soma = 0, menos18 = 0, entre18e22 = 0, mais22 = 0;
    float media = (float)soma / N;
    float percMenos18 = ((float)menos18 / N) * 100;
    float percEntre18e22 = ((float)entre18e22 / N) * 100;
    float percMais22 = ((float)mais22 / N) * 100;
    
    printf("Digite a quantidade de idades: ");
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        printf("Digite a idade %d: ", i + 1);
        scanf("%d", &idade);
        soma += idade;
        
        if (idade < 18) {
            menos18++;
        } else if (idade <= 22) {
            entre18e22++;
        } else {
            mais22++;
        }
    }
        
    printf("Média das idades: %.2f\n", media);
    printf("Percentual de pessoas com menos de 18 anos: %.2f%%\n", percMenos18);
    printf("Percentual de pessoas com idade de 18 a 22 anos: %.2f%%\n", percEntre18e22);
    printf("Percentual de pessoas com mais de 22 anos: %.2f%%\n", percMais22);
    
    return 0;


}