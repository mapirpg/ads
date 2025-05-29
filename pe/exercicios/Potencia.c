#include <stdio.h>

// (a) Função para calcular a potenciação
int calcularPotencia(int base, int expoente) {
    // Caso base: qualquer número elevado a 0 é 1
    if (expoente == 0) {
        return 1;
    }
    
    // Variável para armazenar o resultado
    int resultado = 1;
    
    // Multiplicação sucessiva da base por ela mesma 'expoente' vezes
    for (int i = 1; i <= expoente; i++) {
        resultado *= base;
    }
    
    return resultado;
}

int main() {
    // (b) Solicitar na tela os valores de base e expoente
    int base, expoente;
    
    printf("Calculo de Potenciacao\n");
    printf("-----------------------\n");
    
    printf("Digite o numero base: ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    
    // Verificar se o expoente é negativo
    if (expoente < 0) {
        printf("Este programa nao calcula potencias com expoentes negativos.\n");
        return 1;
    }
    
    // (c) Chamar a função de potenciação
    int resultado = calcularPotencia(base, expoente);
    
    // (d) Imprimir o resultado na tela
    printf("\nResultado: %d elevado a %d = %d\n", base, expoente, resultado);
    
    return 0;
}
