/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
#define PASSO_TEMPO 0.00001
#define VELOCIDADE_AQUILES 10
#define VELOCIDADE_TARTARUGA 1
int main() {
  double posicao_tartaruga = 100, posicao_aquiles = 0, tempo_corrido = 0;
  while (posicao_aquiles < posicao_tartaruga) {
    posicao_tartaruga += VELOCIDADE_TARTARUGA * PASSO_TEMPO;
    posicao_aquiles += VELOCIDADE_AQUILES * PASSO_TEMPO;
    tempo_corrido += PASSO_TEMPO;
  }
  printf("O tempo que Aquiles demorou foi: %lf\n", tempo_corrido);
  return 0;
}
