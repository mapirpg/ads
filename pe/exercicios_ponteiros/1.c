#include <stdio.h>

// Exercício (a): Função para trocar dois números inteiros usando ponteiros
void trocarNumeros(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Estrutura para exercício (b)
struct Area {
    int comprimento;
    int largura;
    int area;
};

// Exercício (b): Função para calcular a área usando ponteiro para a estrutura
void calcularArea(struct Area *a) {
    a->area = a->comprimento * a->largura;
}

// Exercício (c): Função para preencher o terceiro vetor com números comuns aos dois primeiros
void numerosComuns(int *vetor1, int *vetor2, int *vetor3, int tamanho, int *contador) {
    *contador = 0;
    
    // Para cada número no vetor1, verifica se está no vetor2
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            // Se encontrar um número comum
            if (vetor1[i] == vetor2[j]) {
                // Verifica se esse número já foi adicionado ao vetor3
                int jaExiste = 0;
                for (int k = 0; k < *contador; k++) {
                    if (vetor3[k] == vetor1[i]) {
                        jaExiste = 1;
                        break;
                    }
                }
                
                // Se não existe, adiciona ao vetor3
                if (!jaExiste) {
                    vetor3[*contador] = vetor1[i];
                    (*contador)++;
                }
                break; // Sai do loop interno, pois já encontrou o número
            }
        }
    }
}

int main() {
    // Exercício (a): Troca de números
    int num1, num2;
    printf("=== EXERCICIO (a) ===\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);
    trocarNumeros(&num1, &num2);
    printf("Depois da troca: num1 = %d, num2 = %d\n\n", num1, num2);
    
    // Exercício (b): Cálculo de área em estruturas
    printf("=== EXERCICIO (b) ===\n");
    struct Area areas[10];
    int somaTotal = 0;
    
    // Preenchendo e calculando as áreas
    for (int i = 0; i < 10; i++) {
        printf("Digite o comprimento da area %d: ", i+1);
        scanf("%d", &areas[i].comprimento);
        printf("Digite a largura da area %d: ", i+1);
        scanf("%d", &areas[i].largura);
        
        // Calcula a área usando a função com ponteiro
        calcularArea(&areas[i]);
        somaTotal += areas[i].area;
    }
    
    // Imprimindo resultados do exercício (b)
    printf("\nResultados das areas:\n");
    for (int i = 0; i < 10; i++) {
        printf("Area %d: %d x %d = %d\n", i+1, 
               areas[i].comprimento, areas[i].largura, areas[i].area);
    }
    printf("Total de todas as areas: %d\n\n", somaTotal);
    
    // Exercício (c): Números comuns entre dois vetores
    printf("=== EXERCICIO (c) ===\n");
    int tamanho = 5; // Tamanho dos vetores
    int vetor1[tamanho], vetor2[tamanho], vetor3[tamanho];
    int contador;
    
    // Preenchendo os dois primeiros vetores
    printf("Preenchendo o primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    
    printf("Preenchendo o segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor2[i]);
    }
    
    // Chamando função para encontrar números comuns
    numerosComuns(vetor1, vetor2, vetor3, tamanho, &contador);
    
    // Imprimindo o resultado do vetor 3
    printf("\nNumeros comuns aos dois vetores:\n");
    if (contador == 0) {
        printf("Nenhum numero em comum encontrado.\n");
    } else {
        for (int i = 0; i < contador; i++) {
            printf("%d ", vetor3[i]);
        }
        printf("\n");
    }
    
    return 0;
}
