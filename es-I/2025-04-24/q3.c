#include <stdio.h>
#include <math.h>

float getMeasurement(char prompt[]) {
    float value;
    printf("%s", prompt);
    scanf("%f", &value);
    return value;
}

float calculateRectangleArea(float width, float height) {
    return width * height;
}

float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

float calculateCircleArea(float radius) {
    return 3.14159 * radius * radius;
}

void displayArea(char *text, float area) {
    printf("%s %.2f\n\n", text, area);
}

int main() {
    int option;
    float measurement1, measurement2, area;
    
    do {
        printf("Calculadora de Areas Geometricas\n");
        printf("1 - Calcular area de um retangulo\n");
        printf("2 - Calcular area de um triangulo\n");
        printf("3 - Calcular area de um circulo\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &option);
        
        switch(option) {
            case 1: 
                measurement1 = getMeasurement("Informe a largura do retangulo: ");
                measurement2 = getMeasurement("Informe a altura do retangulo: ");
                area = calculateRectangleArea(measurement1, measurement2);
                displayArea("A area do retangulo e:", area);
                break;
                
            case 2:
                measurement1 = getMeasurement("Informe a base do triangulo: ");
                measurement2 = getMeasurement("Informe a altura do triangulo: ");
                area = calculateTriangleArea(measurement1, measurement2);
                displayArea("A area do triangulo e:", area);
                break;
                
            case 3: 
                measurement1 = getMeasurement("Informe o raio do circulo: ");
                area = calculateCircleArea(measurement1);
                displayArea("A area do circulo e:", area);
                break;
                
            case 0: 
                printf("Programa encerrado.\n");
                break;
                
            default:
                printf("Opcao invalida! Tente novamente.\n\n");
        }
    } while(option != 0);
    
    return 0;
}