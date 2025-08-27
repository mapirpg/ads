// 2) Aplicação de um valor financeiro:
// > Solicitar um valor Inicial em Reais
// > Solicitar o número de meses em que o valor inicial deve ficar aplicado
// > Solicitar o percentual de juros a ser aplicado mensalmente
// Declarar um ponteiro float, e alocar dinamicamente o número de meses que foram
// inormados.
// Preencher a primeira ocorrência do vetor com o valor inicial que foi informado e, a
// seguir, ir aplicando o percentual de juros sobre o valor, em todas as ocorrências
// seguintes.
// Ao final, imprimir todo o vetor, exibindo na tela cada um dos valores mensais.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor, mesesAplicado, juros;
    float *meses;

    printf("Digite o valor aplicado\n");
    scanf("%d", &valor);        
    printf("Digite a quantidade de meses\n");
    scanf("%d", &mesesAplicado);

    meses = (float*) malloc(sizeof(float) * mesesAplicado);

    meses[0] = valor;
    for(int i = 1; i < mesesAplicado; i++) {
        meses[i] = valor * juros;
        printf("%d\n", meses[i]);
    }
    

    return 0;
}