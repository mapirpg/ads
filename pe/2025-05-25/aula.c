#include <stdio.h>

// void funcao(int *valor) {
//   *valor = *valor +1;
// }

// int main() {
//   int* ponteiro;
//   int numero;

//   ponteiro = &numero;
//   numero = 2;

//   *ponteiro = 4;

//   numero ++;

//   funcao(&numero);

//   return 0
// }

void calculaPreco(int valor, int quantidade, int *valorTotal) {
  int resultado = (valor * quantidade);
  *valorTotal = resultado;
}

void cadastro() {
  int q, v, r;

  scanf("%d", &v);

  scanf("%d", &q);

  calculaPreco(v, q, &r);

  printf("%d", r);
}
