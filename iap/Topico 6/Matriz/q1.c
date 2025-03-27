#include <stdio.h>

int main () {
//   1) Faça um algoritmo que simule a ocupação de quartos de um hotel. Considere que
//  existem 5 andares e 10 quartos por andar. O objetivo é saber se um quarto está ou não
//  ocupado. O algoritmo deve possuir um menu com as opções: 1-Imprimir lista de quartos;
//  2-Definir ocupação; e 3-Sair. A opção 1 deve mostrar todos os quartos, no formato de
//  uma tabela 5x10, informando se estão ou não ocupados. A opção 2 permite definir o
//  status do quarto (0-livre ou 1-ocupado). A opção 3 encerra o programa

    int X = 5, Y = 10;
    int hotel[X][Y];
    int opcao,  andar, quarto, status;


      for (int i = 0; i < X; i++) {
          for (int j = 0; j < Y; j++) {
              hotel[i][j] = 0;
          }
      }

      do {
        printf("1 - Imprimir lista de quartos\n");
        printf("2 - Definir ocupação\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
          case 1:
            printf("Lista de quartos:\n");
            printf("Andar\tQuarto\tStatus\n");
            for (int i = 0; i < X; i++) {
                for (int j = 0; j < Y; j++) {
                    printf("%d\t%d\t%s\n", i+1, j+1, hotel[i][j] ? "Ocupado" : "Livre");
                }
            }
            break;
          case 2:
            printf("Digite o andar (1-%d): ", X);
            scanf("%d", &andar);

            printf("Digite o quarto (1-%d): ", Y);
            scanf("%d", &quarto);

            printf("Digite o status (0-livre, 1-ocupado): ");

            scanf("%d", &status);
            hotel[andar-1][quarto-1] = status;
            break;
          case 3:
            printf("Encerrar o programa.\n");
            break;
          default:
            printf("Opção inválida.\n");
            break;
        }
      } while (opcao != 3);

      return 0;
}