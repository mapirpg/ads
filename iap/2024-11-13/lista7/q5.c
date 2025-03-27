#include <stdio.h>

int main() {
    // Faça um programa que leia e valide as seguintes informações:

    // Idade: entre 0 e 150;
    // Salário: maior que zero;
    // Sexo: 'F' ou ‘M';
    // Estado Civil: 'S', 'C', ‘V' ou 'D'.

    // Caso o usuário digite de forma errada qualquer uma das informações acima, uma mensagem de erro deve ser apresentada e o usuário deve digitar novamente.

    int idade;
    float salario;
    char sexo, estadoCivil;

    do {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 0 || idade > 150) {
            printf("Idade inválida. Digite novamente.\n");
        }
    } while (idade < 0 || idade > 150);

    do {
        printf("Digite o salário: ");
        scanf("%f", &salario);

        if (salario <= 0) {
            printf("Salário inválido. Digite novamente.\n");
        }
    } while (salario <= 0);

    do {
        printf("Digite o sexo (F/M): ");
        scanf(" %c", &sexo);

        if (sexo != 'F' && sexo != 'M') {
            printf("Sexo inválido. Digite novamente.\n");
        }
    } while (sexo != 'F' && sexo != 'M');

    do {
        printf("Digite o estado civil (S/C/V/D): ");
        scanf(" %c", &estadoCivil);

        if (estadoCivil != 'S' && estadoCivil != 'C' && estadoCivil != 'V' && estadoCivil != 'D') {
            printf("Estado civil inválido. Digite novamente.\n");
        }
    } while (estadoCivil != 'S' && estadoCivil != 'C' && estadoCivil != 'V' && estadoCivil != 'D');

    return 0;
}