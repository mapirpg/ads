#include<stdio.h>

int main() {
    float base, altura, area;

    printf("Digite o valor da base do retângulo\n");
    scanf("%f", &base);
    printf("Digite o valor da altura do retângulo\n");
    scanf("%f", &altura);

    area = 2 * (altura + base);

    printf("A área do retângulo é %2.f\n", area);

    return 0;
}