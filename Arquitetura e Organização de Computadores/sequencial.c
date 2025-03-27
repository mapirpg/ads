#include <stdio.h> 
#define TAMANHO 4 // Número de elementos no vetor 

int main() {
    float a[TAMANHO] = {1.0, 2.0, 3.0, 4.0}; 
    float b[TAMANHO] = {1.5, 2.5, 3.5, 4.5};
    float resultado[TAMANHO];  // Vetor para armazenar o resultado
    // Loop para multiplicar os elementos dos vetores 'a' e 'b'
    for (int i = 0; i < TAMANHO; i++) {
        // Multiplica os elementos correspondentes de 'a' e 'b' e armazena em 'resultado'
        resultado[i] = a[i] * b[i];  
    }
    // Imprime o resultado da multiplicação
    printf("Resultado sequencial:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%f ", resultado[i]);  // Imprime cada elemento do vetor 'resultado'
    }
    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}