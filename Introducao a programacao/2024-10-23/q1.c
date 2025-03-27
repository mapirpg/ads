#include<stdio.h>
 
int main () {
    int num1, num2, diferenca;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    diferenca = num1 - num2;
 

    printf("A diferença entre %d e %d é %d\n", num1, num2, diferenca);
}