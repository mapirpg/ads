#include <stdio.h>

//  2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
//  armazene os dados em uma estrutura. Envie esta estrutura para uma função que imprima os dados.

typedef struct {
  char nome[50];
  int idade;
  char endereco[100];
} Pessoa;

int main () {
    Pessoa pessoa1;
        
    printf("Digite o nome: ");
    scanf("%c", pessoa1.nome);         

    printf("Digite a idade: ");
    scanf("%d", &pessoa1.idade);

    printf("Digite o endereco: ");
    scanf("%s", pessoa1.endereco);

    printf("\nNome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Endereco: %s\n", pessoa1.endereco);

    return 0;
}