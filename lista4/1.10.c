/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
#define ZE 1
#define GAL 2
#define GIL 3
#define PARADA 0

int main() {
  double votos_ze, votos_gal, votos_gil, voto_atual;
  do {
    printf("\nDigite para quem vai seu voto:\n1 - Ze\n2 - Gal\n3 - Gil\n0 - Encerrar votacao\n:");
    scanf("%lf", &voto_atual);
    if (voto_atual == ZE)
      votos_ze++;
    else if (voto_atual == GAL)
      votos_gal++;
    else if (voto_atual == GIL)
      votos_gil++;
  }
  while (voto_atual != PARADA);
  if (votos_ze > votos_gal && votos_ze > votos_gil)
    printf("O vencedor eh Ze!");
  else if (votos_gal > votos_ze && votos_gal > votos_gil)
    printf("O vencedor eh Gal!");
  else if (votos_gil > votos_ze && votos_gil > votos_gal)
    printf("O vencedor eh Gil!");
  else
    printf("Empate!");
  return 0;
}
