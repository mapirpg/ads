#include <stdio.h>

int main() {
    int dia = 0, mes = 0, ano = 0, dia_semana = 0, dias = 0, bissextos = 0;

    do {
        printf("Digite o dia do seu nascimento: ");
        scanf("%d", &dia);

        if (dia <= 0 || dia > 31) {
            printf("Valor inválido. Digite novamente.\n");
        }
    } while (dia <= 0 || dia > 31);

    do {
        printf("Digite o mês do seu nascimento: ");
        scanf("%d", &mes);

        if (mes <= 0 || mes > 12) {
            printf("Valor inválido. Digite novamente.\n");
        }
    } while (mes <= 0 || mes > 12);

    do {
        printf("Digite o ano do seu nascimento: ");
        scanf("%d", &ano);

        if (ano < 1900) {
            printf("Valor inválido. Digite novamente.\n");
        }
    } while (ano < 1900);

    dias = (ano - 1900) * 365;

    bissextos = (ano - 1900) / 4;

    dias += bissextos;

    switch (mes) {
        case 1: dias += 0; break;
        case 2: dias += 3; break;
        case 3: dias += 3; break;
        case 4: dias += 6; break;
        case 5: dias += 1; break;
        case 6: dias += 4; break;
        case 7: dias += 6; break;
        case 8: dias += 2; break;
        case 9: dias += 5; break;
        case 10: dias += 0; break;
        case 11: dias += 3; break;
        case 12: dias += 5; break;
    }

    dias += dia;

    dia_semana = dias % 7;

    switch (dia_semana) {
        case 0: printf("Você nasceu em um domingo.\n"); break;
        case 1: printf("Você nasceu em uma segunda-feira.\n"); break;
        case 2: printf("Você nasceu em uma terça-feira.\n"); break;
        case 3: printf("Você nasceu em uma quarta-feira.\n"); break;
        case 4: printf("Você nasceu em uma quinta-feira.\n"); break;
        case 5: printf("Você nasceu em uma sexta-feira.\n"); break;
        case 6: printf("Você nasceu em um sábado.\n"); break;
    }

    return 0;
}