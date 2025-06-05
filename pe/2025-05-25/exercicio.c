#include <stdio.h>

// Exercício Ponteiro Struct data livre
//  struct Data {
//  int dia;
//  int mes;
//  int ano;
//  int livre;
//  };
//  »Criar um Vetor da estrutura “Data” para os 30 dias do mês;
//  »Preencher no vetor a data do 1º dia de algum mês do ano;
//  »Uma função recebe o ponteiro do vetor e faz o preenchimento de todas as datas do vetor 
// (sequencialmente);


//  »Enquanto não for solicitado encerrar o programa; solicitar na tela um dia do mês e, em uma função
//  separada, procurar se este dia está “livre” ou não;
//  • Caso esteja livre, marcar como ocupado e informar uma mensagem na tela;
//  • Caso esteja não esteja livre, procurar pelo próximo dia livre, marcar como ocupado e 
// informar uma mensagem na tela;
//  » Quando solicitado para encerrar o programa, uma função deve receber o ponteiro do vetor e 
// realizar a impressão na tela, mostrando os dias Livres e os Ocupado

struct Data {
  int dia;
  int mes;
  int ano;
  int livre;
};

void preencherDatas(struct Data *datas, struct Data data, int *dias) {
  for (int i = 0; i < *dias; i++) {
    datas[i].dia = i + 1;
    datas[i].ano = data.ano;
    datas[i].mes = data.mes;
    datas[i].livre = 0;

    if (i %2 != 1 ) {
      datas[i].livre = 1;
    } 
  }
}

void consultarDia(struct Data *datas, int *dias, int *encerrar) {
  int dia, encontrado = 0;

  printf("Digite o dia ou 0 para encerrar\n");
  scanf("%d", &dia);

  if (dia == 0) {
    *encerrar = 1;
  } else {
    int diaIndex = dia - 1;

    if (datas[diaIndex].livre == 1) {
      datas[diaIndex].livre = 0;
      printf("Data livre, dia %d/%d/%d foi reservado.\n", datas[diaIndex].dia, datas[diaIndex].mes, datas[diaIndex].ano);
    } else {
      printf("Dia %d/%d/%d está ocupado.\n", datas[diaIndex].dia, datas[diaIndex].mes, datas[diaIndex].ano);

      for (int i = diaIndex; (i < *dias) && (encontrado == 0); i++) {
        if (datas[i].livre == 1) {
          datas[i].livre = 0;
          printf("Reservado %d/%d/%d, o próximo vago.\n", datas[i].dia, datas[i].mes, datas[i].ano);
          encontrado = 1;
        }
      }
    }
  }
}

int main() {
  int dias = 30, encerrar = 0;
  struct Data data1 = {1, 1, 2025, 0};
  struct Data datas[dias];

  for (int i = 0; i < dias; i++) {
    preencherDatas(datas, data1, &dias);
  }

  while(encerrar == 0) {
    consultarDia(datas, &dias, &encerrar);
  }

  for (int i = 0; i < dias; i++) {
    if (datas[i].livre == 0) {
      printf("%d/%d/%d - ocupado \n", datas[i].dia, datas[i].mes, datas[i].ano);

    } else {
      printf("%d/%d/ %d - livre \n", datas[i].dia, datas[i].mes, datas[i].ano);
    }
  }

  return 0;
}