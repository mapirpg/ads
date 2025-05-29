#include <stdio.h>
#include <string.h>

// Exemplo 1: Definição básica de uma struct
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

// Exemplo 2: Struct com typedef (cria um alias para o tipo)
typedef struct {
    char marca[50];
    char modelo[50];
    int ano;
    float preco;
} Carro;

// Exemplo 3: Struct aninhada (uma struct dentro de outra)
struct Endereco {
    char rua[100];
    int numero;
    char cidade[50];
    char estado[2];
    char cep[10];
};

struct Funcionario {
    char nome[50];
    int id;
    float salario;
    struct Endereco endereco;
};

// Exemplo 4: Array de structs
typedef struct {
    char nome[50];
    float nota;
} Aluno;

// Exemplo 5: União dentro de uma struct
typedef union {
    int numeroConta;
    char codigoAcesso[10];
} TipoAcesso;

typedef struct {
    char nome[50];
    TipoAcesso acesso;
    int usaNumeroConta; // 1 se usa número de conta, 0 se usa código de acesso
} ContaBancaria;

// Exemplo 6: Struct com ponteiro para si mesma (para estruturas de dados)
struct No {
    int valor;
    struct No* proximo;
};

// Função para demonstrar passagem de struct por valor
void exibirPessoa(struct Pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d anos\n", p.idade);
    printf("Altura: %.2f m\n", p.altura);
}

// Função para demonstrar passagem de struct por referência
void aniversario(struct Pessoa *p) {
    p->idade++; // Aumenta a idade em 1 ano
}

// Função que retorna uma struct
Carro criarCarro(const char *marca, const char *modelo, int ano, float preco) {
    Carro novoCarro;
    strcpy(novoCarro.marca, marca);
    strcpy(novoCarro.modelo, modelo);
    novoCarro.ano = ano;
    novoCarro.preco = preco;
    return novoCarro;
}

int main() {
    // Exemplo 1: Inicializando e acessando uma struct básica
    struct Pessoa pessoa1;
    strcpy(pessoa1.nome, "João Silva");
    pessoa1.idade = 30;
    pessoa1.altura = 1.75;
    
    printf("=== Exemplo 1: Struct Básica ===\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f\n\n", pessoa1.altura);
    
    // Outra forma de inicializar
    struct Pessoa pessoa2 = {"Maria Oliveira", 25, 1.65};
    printf("Inicialização direta: %s, %d anos, %.2f m\n\n", pessoa2.nome, pessoa2.idade, pessoa2.altura);
    
    // Exemplo 2: Usando typedef
    printf("=== Exemplo 2: Struct com Typedef ===\n");
    Carro meuCarro = {"Toyota", "Corolla", 2020, 85000.0};
    printf("Carro: %s %s, ano %d, R$ %.2f\n\n", meuCarro.marca, meuCarro.modelo, meuCarro.ano, meuCarro.preco);
    
    // Exemplo 3: Struct aninhada
    printf("=== Exemplo 3: Struct Aninhada ===\n");
    struct Funcionario funcionario1;
    strcpy(funcionario1.nome, "Carlos Mendes");
    funcionario1.id = 12345;
    funcionario1.salario = 5000.0;
    strcpy(funcionario1.endereco.rua, "Rua das Flores");
    funcionario1.endereco.numero = 123;
    strcpy(funcionario1.endereco.cidade, "São Paulo");
    strcpy(funcionario1.endereco.estado, "SP");
    strcpy(funcionario1.endereco.cep, "01234-567");
    
    printf("Funcionário: %s (ID: %d)\n", funcionario1.nome, funcionario1.id);
    printf("Endereço: %s, %d - %s/%s\n\n", 
           funcionario1.endereco.rua,
           funcionario1.endereco.numero,
           funcionario1.endereco.cidade,
           funcionario1.endereco.estado);
    
    // Exemplo 4: Array de structs
    printf("=== Exemplo 4: Array de Structs ===\n");
    Aluno turma[3];
    strcpy(turma[0].nome, "Ana Paula");
    turma[0].nota = 9.5;
    
    strcpy(turma[1].nome, "Bruno Souza");
    turma[1].nota = 8.0;
    
    strcpy(turma[2].nome, "Carla Lima");
    turma[2].nota = 9.8;
    
    float somaNotas = 0;
    for (int i = 0; i < 3; i++) {
        printf("Aluno: %s - Nota: %.1f\n", turma[i].nome, turma[i].nota);
        somaNotas += turma[i].nota;
    }
    printf("Média da turma: %.1f\n\n", somaNotas/3);
    
    // Exemplo 5: União em struct
    printf("=== Exemplo 5: União em Struct ===\n");
    ContaBancaria conta1;
    strcpy(conta1.nome, "Pedro Alves");
    conta1.usaNumeroConta = 1;
    conta1.acesso.numeroConta = 123456;
    
    ContaBancaria conta2;
    strcpy(conta2.nome, "Lucia Santos");
    conta2.usaNumeroConta = 0;
    strcpy(conta2.acesso.codigoAcesso, "ABC123");
    
    printf("Conta 1: %s - ", conta1.nome);
    if (conta1.usaNumeroConta)
        printf("Número: %d\n", conta1.acesso.numeroConta);
    else
        printf("Código: %s\n", conta1.acesso.codigoAcesso);
    
    printf("Conta 2: %s - ", conta2.nome);
    if (conta2.usaNumeroConta)
        printf("Número: %d\n", conta2.acesso.numeroConta);
    else
        printf("Código: %s\n\n", conta2.acesso.codigoAcesso);
    
    // Exemplo 6: Struct com ponteiro (lista encadeada simples)
    printf("=== Exemplo 6: Struct com Ponteiro (Lista Encadeada) ===\n");
    struct No no1 = {10, NULL};
    struct No no2 = {20, NULL};
    struct No no3 = {30, NULL};
    
    // Conectando os nós
    no1.proximo = &no2;
    no2.proximo = &no3;
    
    // Percorrendo a lista encadeada
    struct No* atual = &no1;
    printf("Lista encadeada: ");
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n\n");
    
    // Exemplo de passagem de struct por valor e por referência
    printf("=== Exemplo 7: Passagem de Struct para Funções ===\n");
    exibirPessoa(pessoa1);
    
    printf("\nAntes do aniversário: %d anos\n", pessoa1.idade);
    aniversario(&pessoa1);
    printf("Depois do aniversário: %d anos\n\n", pessoa1.idade);
    
    // Exemplo de função retornando struct
    printf("=== Exemplo 8: Função Retornando Struct ===\n");
    Carro novoCarro = criarCarro("Honda", "Civic", 2023, 120000.0);
    printf("Novo carro: %s %s (%d) - R$ %.2f\n\n", novoCarro.marca, novoCarro.modelo, novoCarro.ano, novoCarro.preco);
    
    return 0;
}
