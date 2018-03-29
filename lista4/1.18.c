/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double A, B;
  int repeticao = 0, i;
  printf("Insira um numero: ");
  scanf("%lf", &A);
  printf("Insira outro numero: ");
  scanf("%lf", &B);
  if (A > B) {
    for (i = 2; i <= B; i++) {
      if (fmod(A, i) == 0 && fmod(B, i) == 0) {
        printf("Os dois numeros nao sao primos entre si, pois %d divide os dois\n", i);
        repeticao++;
        break;
      }
    }
  }
  else {
    for (int i = 2; i <= A; i++) {
      if (fmod(A, i) == 0 && fmod(B, i) == 0) {
        printf("Os dois numeros nao sao primos entre si, pois %d divide os dois\n", i);
        repeticao++;
        break;
      }
    }
  }
  if (repeticao == 0)
    printf("Os numeros sao primos entre si\n");
  return 0;
}
