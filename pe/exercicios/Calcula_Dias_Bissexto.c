#include <stdio.h>

// Função para verificar se um ano é bissexto
int ehBissexto(int ano) {
    // Caso 1: É divisível por 4, mas não é divisível por 100
    // OU
    // Caso 2: É divisível por 4, por 100 e por 400
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; // É bissexto
    } else {
        return 0; // Não é bissexto
    }
}

int main() {
    char nome[100];
    int anoNascimento, anoAtual;
    int totalDias = 0;
    
    // a) Solicitar o nome da pessoa
    printf("Digite o nome da pessoa: ");
    fgets(nome, sizeof(nome), stdin);
    
    // Remover a quebra de linha do nome (se existir)
    int i = 0;
    while (nome[i] != '\n' && nome[i] != '\0') {
        i++;
    }
    if (nome[i] == '\n') {
        nome[i] = '\0';
    }
    
    // b) Solicitar o ano de nascimento
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);
    
    // c) Solicitar o ano atual
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    
    // Validar se os anos estão em ordem cronológica
    if (anoNascimento > anoAtual) {
        printf("Erro: O ano de nascimento não pode ser posterior ao ano atual!\n");
        return 1;
    }
    
    // d) Calcular o número de dias vividos
    for (int ano = anoNascimento; ano < anoAtual; ano++) {
        if (ehBissexto(ano)) {
            totalDias += 366; // Ano bissexto tem 366 dias
        } else {
            totalDias += 365; // Ano não bissexto tem 365 dias
        }
    }
    
    // Exibir o resultado
    printf("\nResultado:\n");
    printf("Nome: %s\n", nome);
    printf("Idade em anos: %d\n", anoAtual - anoNascimento);
    printf("Total de dias vividos: %d\n", totalDias);
    
    // Exibir quais anos entre o nascimento e o ano atual foram bissextos
    printf("\nAnos bissextos entre %d e %d:\n", anoNascimento, anoAtual - 1);
    int encontrouBissexto = 0;
    
    for (int ano = anoNascimento; ano < anoAtual; ano++) {
        if (ehBissexto(ano)) {
            printf("%d ", ano);
            encontrouBissexto = 1;
        }
    }
    
    if (!encontrouBissexto) {
        printf("Nenhum ano bissexto no período.");
    }
    
    printf("\n");
    
    return 0;
}
