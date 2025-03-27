#include <stdio.h>
#include <immintrin.h>  // Biblioteca para instruções SIMD
#define TAMANHO 4 // Número de elementos no vetor 

int main() {
    // Vetores de entrada
    float a[TAMANHO] = {1.0, 2.0, 3.0, 4.0};
    float b[TAMANHO] = {1.5, 2.5, 3.5, 4.5};
    float resultado[TAMANHO];  // Vetor para armazenar o resultado
    // Carregar os elementos do vetor 'a' em um registrador SIMD
    __m128 vetorA = _mm_loadu_ps(a);
    // Carregar os elementos do vetor 'b' em um registrador SIMD
    __m128 vetorB = _mm_loadu_ps(b);
    // Multiplicar os vetores 'a' e 'b'
    __m128 vetorResultado = _mm_mul_ps(vetorA, vetorB);
    // Armazenar o resultado da multiplicação no vetor 'resultado'
    _mm_storeu_ps(resultado, vetorResultado);
    // Imprimir o resultado
    printf("Resultado SIMD:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%f ", resultado[i]);
    }
    // comando para executar o código
    // gcc -mavx -o simd simd.c
    // ./simd
    return 0;
}