#include <stdio.h>

int main() {
    // Escreva um algoritmo que permita validar uma data fornecida. O algoritmo deve considerar os dias, meses e anos, incluindo a verificação para anos bissextos. O programa deve solicitar ao usuário que insira um dia, um mês e um ano.

    // A validação deve seguir as seguintes regras:

    // O ano deve ser maior ou igual a 1.
    // O mês deve estar entre 1 (janeiro) e 12 (dezembro).
    // Para o mês de fevereiro:
    // Se o ano é bissexto, o dia deve estar entre 1 e 29.
    // Se o ano não é bissexto, o dia deve estar entre 1 e 28.
    // Para os meses de abril, junho, setembro e novembro, o dia deve estar entre 1 e 30.
    // Para os meses de janeiro, março, maio, julho, agosto, outubro e dezembro, o dia deve estar entre 1 e 31.
    // O programa deve imprimir se a data é válida ou inválida com a seguinte formatação:

    // "A data DD/MM/AAAA é válida." ou "A data DD/MM/AAAA é inválida."

    // Observações:

    // Um ano é bissexto se for divisível por 4, mas não por 100, ou, se for divisível por 400.
    // Para imprimir no formato DD/MM/AAAA, use "A data %02d/%02d/%04d é ..." no printf.
    // Exemplos:

    // Exemplo de Entrada	Exemplo de Saída
    // 31 11 2024	A data 31/11/2024 é inválida
    // 29 2 2000	A data 29/02/2000 é válida
    // 31 4 2020	A data 31/04/2020 é inválida
    // 12 7 15	A data 12/07/0015 é válida
    // 28 10 0	A data 28/10/0000 é inválida

    int dia, mes, ano, valido = 1;

    scanf("%d %d %d", &dia, &mes, &ano);

    if (ano < 1) {
        valido = 0;
    } else if (mes < 1 || mes > 12) {
        valido = 0;
    } else if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            if (dia < 1 || dia > 29) {
                valido = 0;
            }
        } else {
            if (dia < 1 || dia > 28) {
                valido = 0;
            }
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia < 1 || dia > 30) {
            valido = 0;
        }
    } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        if (dia < 1 || dia > 31) {
            valido = 0;
        }
    }

    if (valido == 1) {
        printf("A data %d/%d/%d é válida", dia, mes, ano);
    } else {
        printf("A data %d/%d/%d é inválida", dia, mes, ano);
    }

    return 0;
}