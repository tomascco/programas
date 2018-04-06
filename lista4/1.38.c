/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double soma_pares = 0, soma_impares = 0, maior_par = 0, maior_impar = 0;
  int quant_pares = 0, quant_impares = 0, num_atual;
  printf("Insira uma serie de numeros:\n");
  scanf("%d", &num_atual);
  do {
    if (num_atual % 2 == 0) {
      quant_pares++;
      soma_pares += num_atual;
      if (num_atual > maior_par)
        maior_par = num_atual;
    }
    else if (num_atual % 2 != 0) {
      quant_impares++;
      soma_impares += num_atual;
      if (num_atual > maior_impar)
        maior_impar = num_atual;
    }
    scanf("%d", &num_atual);
  }
  while(num_atual > 0);
  printf("A media dos pares eh: %.2lf\n", soma_pares / quant_pares);
  printf("A media dos impares eh: %.2lf\n", soma_impares / quant_impares);
  printf("O maior par eh: %0.0lf, o maior impar eh: %0.0lf\n", maior_par, maior_impar);
  return 0;
}
