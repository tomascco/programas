#include <stdio.h>
#include <math.h>

int main() {
  int hora_trab, hora_extra;
  float sal_min;
  printf("Insira o numero de horas trabalhadas: ");
  scanf("%d", &hora_trab);
  printf("Insira o numero de horas extras: ");
  scanf("%d", &hora_extra);
  printf("Insira o valor do salario minimo: ");
  scanf("%f", &sal_min);
  // sendo a hora trabalhada = hora_trab*0.125 e a hora extra = hora_extra*0.25, podemos escrever:
  printf("Seu salario eh: %.2f\n", hora_trab*sal_min*0.125 + hora_extra*sal_min*0.25);
  return 0;
}
