/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
#define MASCULINO 1
#define FEMININO 2

int main() {
  double alturas_F = 0, altura_atual, alturas_total = 0, menor_altura = 100, maior_altura = 0;
  int sexo_atual, num_M = 0;
  for (int i = 1; i <=   5; i++) {
    printf("Ficha %d: Insira o sexo e a altura da pessoa separadas por espaço: ", i);
    scanf("%d", &sexo_atual);
    scanf("%lf", &altura_atual);
    if (altura_atual > maior_altura)
      maior_altura = altura_atual;
    if (altura_atual < menor_altura)
      menor_altura = altura_atual;
    if (sexo_atual == MASCULINO) {
      alturas_total += altura_atual;
    }
    else {
      alturas_F += altura_atual;
      num_M++;
    }
  }
  alturas_total += alturas_F;
  printf("A media de altura da turma eh: %.2lf\nA media de altura das mulheres eh: %.2lf\n", alturas_total / 5, alturas_F / num_M);
  printf("A maior altura da turma eh: %.2lf, a menor eh: %.2lf\n", maior_altura, menor_altura);
  return 0;
}
