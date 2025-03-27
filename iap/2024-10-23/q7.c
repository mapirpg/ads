#include<stdio.h>

int main(){
    // Um motorista de Uber anota a quilometragem do seu veículo no início do dia e ao término do dia de trabalho bem como o número de litros de combustível gastos. Elabore um algoritmo que leia os 3 dados acima e a capacidade do tanque. Ao final, o algoritmo deve calcular e mostrar quantos quilômetros o seu carro faz com um tanque cheio.

    float km_i, km_f, combustivel, tanque, km_total, km_litro, km_tanque;

    printf("Digite a capacidade total do tanque de combustível\n");
    scanf("%f", &tanque);

    printf("Digite a quantidade de combustível do abastecimento\n");
    scanf("%f", &combustivel);

    printf("Digite a kilometragem inicial\n");
    scanf("%f", &km_i);
   
    printf("Digite a kilometragem final\n");
    scanf("%f", &km_f);

    km_total = km_f - km_i;
    km_litro = km_total / combustivel;
    km_tanque = km_litro * tanque;

    printf("O veículo tem a capacidade de circular %2.f km com o tanque cheio", km_tanque);

    return 0;
}