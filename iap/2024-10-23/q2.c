#include<stdio.h>

int main() {
    float raio, area, perimetro;
    float pi = 3.14159;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;
    area = pi * raio * raio;

    printf("A área do círculo é %.2f e o perímetro é %.2f\n", area, perimetro);

    return 0;
}