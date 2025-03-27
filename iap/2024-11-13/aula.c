#include <stdio.h>

// programa que lê 10 idades e calcula a idade média 
// contar quantidade de pessoas menores de idade
int main() {
    int idade;
    int somaIdade = 0; // variável acumuladora || variável somadora
    int cont = 0;      // variável contadora
    float idadeMedia;

    for (int x = 1; x <= 3; x++) {
        printf("Digite a idade da pessoa %d: ", x);
        scanf("%d", &idade);
        somaIdade = somaIdade + idade; // expressão somadora

        if (idade < 18) {
            cont = cont + 1; // expressão contadora
        }
    }

    idadeMedia = (float)somaIdade / 3; // (float) para retornar casas decimais
    printf("Idade média: %f", idadeMedia);
    printf("\nQuantidade de pessoas menores de idade: %d ", cont);

    return 0;
}