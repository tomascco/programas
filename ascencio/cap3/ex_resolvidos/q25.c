#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  float preco, convite;
  printf("Entre com o valor do espetaculo: ");
  scanf("%f",&preco);
  printf("\nAgora entre com o valor do convite: ");
  scanf("%f", &convite);
  printf("\nO numero minimo de convites a serem vendidos para cobrir os gastos eh: %1.f\n\n", ceil(preco/convite));

  return 0;
}
