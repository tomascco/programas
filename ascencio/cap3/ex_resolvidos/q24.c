#include <stdio.h>
#include <math.h>

int main() {
  double hhmm, hora, min;
  printf("Insira um intervalo de tempo no Formato HH.MM para calcula-lo em minutos: ");
  scanf("%lf", &hhmm);
  min = modf(hhmm, &hora);
  printf("\nSeu intervalo de tempo eh: %lf\n\n", hora*60 + min*100);


  return 0;
}
