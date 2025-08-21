#include <stdio.h>

struct Lado {
    int valor;
};

void solicitarTamanhoLados(int qLados, struct Lado *lados) {
    for (int i = 0; i < qLados; i++) {
        printf("Insira o valor em centimetros do lado %d:\n", i + 1);
        scanf("%d", &lados[i].valor);
    }
}

void calcularPerimetro(int qLados, struct Lado *lados, int *perimetro) {
    *perimetro = 0;
    for (int i = 0; i < qLados; i++) {
        *perimetro += lados[i].valor;
    }
}

void mostrarResultados(int qLados, int perimetro) {
    printf("Quantidade de lados: %d\n", qLados);
    printf("Perimetro: %d\n", perimetro);
}

int main() {
    int qLados = -1, perimetro = 0;
    struct Lado lados[qLados];

    while (qLados != 0) {
        printf("Insira a quantidade de lados (minimo 3) do poligono ou digite 0 para encerrar.\n");
        scanf("%d", &qLados);
        if (qLados > 0) {
            solicitarTamanhoLados(qLados, lados);
            calcularPerimetro(qLados, lados, &perimetro);
            mostrarResultados(qLados, perimetro);
        }
    }
    
    return 0;
}
