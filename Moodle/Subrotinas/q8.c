/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema:
*/

#include <stdio.h>
#include <math.h>

unsigned long int fib(int a) { // fibonacci
  double phi = (1 + sqrt(5)) / 2.0; // numero de ouro
  return floor((pow(phi, a) / sqrt(5)) + 0.5); // wikipedia é god
}

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    printf("%lu ", fib(i));
  }
  return 0;
}
