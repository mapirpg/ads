#include <stdio.h>

int main() {
    // Fernando tem 1,50m e cresce 2cm por ano. Seu irmão Marcos tem 1,20m e cresce 4cm por ano. Faça um algoritmo para calcular em quantos anos Marcos será mais alto que Fernando.

    float alturaFernando = 1.50, alturaMarcos = 1.20;
    int anos = 0;

    while (alturaMarcos <= alturaFernando) {
        alturaFernando += 0.02;
        alturaMarcos += 0.04;
        anos++;
    }

    printf("Marcos será mais alto que Fernando em %d anos.\n", anos);

    return 0;
}