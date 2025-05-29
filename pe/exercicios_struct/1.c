#include <stdio.h>

// 1. Escreva um trecho de codigo para fazer a criação dos novos tipos de dados conforme
//  solicitado abaixo:
//  • Horario: composto de hora, minutos e segundos. 
// • Data: composto de dia, mes e ano.
//  • Compromisso: composto de uma data, horario e texto que descreve o compromisso.
//  Declare uma  variável deste tipo de dados inicializando seu conteúdo e, a seguir, modifique o
//  valor do conteúdo desta variável

int main () {
    typedef struct {
        int hora;
        int minuto;
        int segundo;
    } Horario;

    typedef struct {
        int dia;
        int mes;
        int ano;
    } Data;

    typedef struct {
        Data data;
        Horario horario;
        char descricao[100];
    } Compromisso;

    Compromisso compromisso1 = {{15, 10, 2023}, {14, 30, 0}, "Reunião com o cliente"};

    printf("Compromisso: %s\n", compromisso1.descricao);
    printf("Data: %02d/%02d/%04d\n", compromisso1.data.dia, compromisso1.data.mes, compromisso1.data.ano);
    printf("Horário: %02d:%02d:%02d\n", compromisso1.horario.hora, compromisso1.horario.minuto, compromisso1.horario.segundo);

    compromisso1.data.dia = 16;
    compromisso1.data.mes = 10;
    compromisso1.data.ano = 2023;
    compromisso1.horario.hora = 10;
    compromisso1.horario.minuto = 0;
    compromisso1.horario.segundo = 0;

    printf("\nNovo Compromisso: %s\n", compromisso1.descricao);
    printf("Data: %02d/%02d/%04d\n", compromisso1.data.dia, compromisso1.data.mes, compromisso1.data.ano);
    printf("Horário: %02d:%02d:%02d\n", compromisso1.horario.hora, compromisso1.horario.minuto, compromisso1.horario.segundo);

    return 0;
}