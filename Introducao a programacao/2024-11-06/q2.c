#include <stdio.h>

int main() {
    int dia, mes;

    // Áries: 21 de março a 20 de abril
    // Touro: 21 de abril a 20 de maio
    // Gêmeos: 21 de maio a 20 de junho
    // Câncer: 21 de junho a 22 de julho
    // Leão: 23 de julho a 22 de agosto
    // Virgem: 23 de agosto a 22 de setembro
    // Libra: 23 de setembro a 22 de outubro
    // Escorpião: 23 de outubro a 21 de novembro
    // Sagitário: 22 de novembro a 21 de dezembro
    // Capricórnio: 22 de dezembro e 20 de janeiro
    // Aquário: 21 de janeiro a 18 de fevereiro
    // Peixes: 19 de fevereiro a 20 de março

    scanf("%d %d", &dia, &mes);

    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20)) {
        printf("Áries");
    } else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20)) {
        printf("Touro");
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        printf("Gêmeos");
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21)) {
        printf("Câncer");
    } else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22)) {
        printf("Leão");
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        printf("Virgem");
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        printf("Libra");
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        printf("Escorpião");
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        printf("Sagitário");
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 20)) {
        printf("Capricórnio");
    } else if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19)) {
        printf("Aquário");
    } else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20)) {
        printf("Peixes");
    }

    return 0;
}
