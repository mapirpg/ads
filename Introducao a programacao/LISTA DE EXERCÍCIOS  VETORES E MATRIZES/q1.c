#include <stdio.h>

#define NUM_ALUNOS 20

int main() {
    // Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a
    // média da turma e contar quantos alunos obtiveram nota acima desta média calculada.
    // Escrever a média da turma e o resultado da contagem
       
    float notas[NUM_ALUNOS];
    float soma = 0.0, media;
    int acima_da_media = 0;

    // Ler as notas dos alunos
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Calcular a média da turma
    media = soma / NUM_ALUNOS;

    // Contar quantos alunos obtiveram nota acima da média
    for (int i = 0; i < NUM_ALUNOS; i++) {
        if (notas[i] > media) {
            acima_da_media++;
        }
    }

    // Escrever a média da turma e o resultado da contagem
    printf("Média da turma: %.2f\n", media);
    printf("Número de alunos com nota acima da média: %d\n", acima_da_media);

    return 0;
}