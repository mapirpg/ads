#include <stdio.h>

float calculateConsumption(float distance, float liters) {
    return distance / liters;
}

void printConsumption(float consumption) {
  if (consumption < 8.0) {
    printf("Venda o carro!\n");
  } else if (consumption >= 8.0 && consumption <= 12.0) {
      printf("Economico!\n");
  } else {
      printf("Super economico!\n");
  }
}

int main() {
  float distance, liters, consumption;
  
  printf("Digite a distancia percorrida (km): ");
  scanf("%f", &distance);
  
  printf("Digite a quantidade de litros consumidos: ");
  scanf("%f", &liters);
  
  consumption = calculateConsumption(distance, liters);
  
  printf("Consumo: %.2f km/l\n", consumption);
  
  printConsumption(consumption);
   
  return 0;
}