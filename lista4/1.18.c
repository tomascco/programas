/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int A, B;
  printf("Insira um numero: ");
  scanf("%d", &A);
  printf("Insira outro numero: ");
  scanf("%d", &B);
  if (A > B) {
    for (int i = 2; i <= B; i++) {
      if (A % i == 0 && B % i == 0)
        printf("Os dois numeros nao sao primos entre si, pois %d divide os dois\n", i);
    }
  }
  else
    for (int i = 2; i <= A; i++) {
      if (A % i == 0 && B % i == 0)
        printf("Os dois numeros nao sao primos entre si, pois %d divide os dois\n", i);
    }
  printf("Os numeros sao primos entre si\n");
  return 0;
}
