#include <stdio.h>
#include <math.h>

int main() {
    // Escreva um algoritmo que lê os coeficientes a, b e c da equação de 2º grau
    // a⋅x2+b⋅x+c=0
    // e que mostra as suas raízes, quando possível. Verifique se os coeficientes realmente formam uma equação do segundo grau (a > 0).

    // Fórmula de Bhaskara:
    // x=−b±Δ−−√2⋅a
    // onde
    // Δ=b2–4⋅a⋅c

    // Lembrando que:
    // ⎧⎩⎨Se Δ>0Se Δ=0Se Δ<0Existem duas raízes diferentesExistem duas raízes iguais Não existe raiz real

    // Exemplos

    // Exemplo de Entrada	Exemplo da Saída
    // 1 2 -15	3 -5
    // 1 2 1	-1
    // 1 2 3	Não existe raiz real
    // 0 1 2	Não é uma equação do segundo grau
    // Atenção: A entrada e a saída devem seguir o formato dos exemplos fornecidos.

    float a, b, c, delta, x1, x2;

    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a *c;
    
    if (a == 0) {
        printf("Não é uma equação de segundo grau");
    } else {
        if (delta > 0) {
            x1 = (-(b) + sqrt(delta)) / 2 * a;
            x2 = (-(b) - sqrt(delta)) / 2 * a;

            printf("Existem duas raízes diferentes: %2.f e %2.f: ", x1, x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);

            printf("Existem duas raízes iguais: %2.f", x1);
        } else {
            printf("Não existe raiz real");
        }
    } 

    return 0;
}