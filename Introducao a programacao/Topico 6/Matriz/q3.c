#include <stdio.h>

int main () {
//     4) Construa um algoritmo que leia uma matriz X X X. No final, exiba:
//      a) a soma dos elementos da diagonal principal e da diagonal secundária
//      b) a soma dos elementos da diagonal secundária
//      c) a soma dos elementos acima da diagonal principal
//      d) a soma dos elementos abaixo da diagonal secundári

    int X = 2;
    int matriz[X][X];

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < X; j++) {
            printf("Digite o valor da posição %d %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma_diagonal_principal = 0;
    int soma_diagonal_secundaria = 0;
    int soma_acima_diagonal_principal = 0;
    int soma_abaixo_diagonal_secundaria = 0;

            // I   0   1   2   3   4 - J
            // 0   1 | 2 | 3 | 4 | 5
            // 1   1 | 2 | 3 | 4 | 5
            // 2   1 | 2 | 3 | 4 | 5
            // 3   1 | 2 | 3 | 4 | 5
            // 4   1 | 2 | 3 | 4 | 5
            
            
            // I   0   1   - J
            // 0   5 | 41
            // 1   7 | 1 
       


    for (int i = 0; i < X; i++) {
        for (int j = 0; j < X; j++) {
            if (i == j) {
                soma_diagonal_principal += matriz[i][j];
            }
            if (i + j == (X -1)) {
                soma_diagonal_secundaria += matriz[i][j];
            }
            if (i == 0) {
                soma_acima_diagonal_principal += matriz[i][j];
            }
            if (i == (X -1)) {
                soma_abaixo_diagonal_secundaria += matriz[i][j];
            }
        }
    }

    printf("Soma dos elementos da diagonal principal: %d\n", soma_diagonal_principal);
    printf("Soma dos elementos da diagonal secundária: %d\n", soma_diagonal_secundaria);
    printf("Soma dos elementos acima da diagonal principal: %d\n", soma_acima_diagonal_principal);
    printf("Soma dos elementos abaixo da diagonal secundária: %d\n", soma_abaixo_diagonal_secundaria);
    return 0;  
}