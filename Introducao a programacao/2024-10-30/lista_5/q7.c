#include <stdio.h>

int main() {
    // Faça um algoritmo que leia um número de matrícula de uma sociedade e informe a data de pagamento da mensalidade de acordo com a a tabela abaixo. O número de matrícula deve ser armazenado em uma variável inteira.
    // –Final 0, 1 ou 2 – pagamento até 10/fevereiro
    // –Final 3, 4 ou 5 – pagamento até 10/abril
    // –Final 6 ou 7 – pagamento até 10/junho
    // –Outro final – pagamento até 10/agosto

    int matricula;
    

    printf("Digite o número da matrícula: ");
    scanf("%d", &matricula);

    if (matricula > 0 && matricula <= 2) {
        printf("Pagamento até 10/fevereiro");
    } else if (matricula > 2 && matricula <= 5) {
        printf("Pagamento até 10/abril");
    } else if (matricula > 5 && matricula <= 7) {
        printf("Pagamento até 10/junho");
    } else {
        printf("Pagamento até 10/agosto");
    }
}