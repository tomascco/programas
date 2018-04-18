/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/
#include <stdio.h>
#include <math.h>

unsigned long int fib(int a) { // fibonacci
  double phi = (1 + sqrt(5)) / 2.0; // numero de ouro
  return floor((pow(phi, a) / sqrt(5)) + 0.5); // wikipedia é god
}

int main() {
  int x, i, n;
  scanf("%d", &x);
  for (i = 0; i < x; i++) {
    scanf("%d", &n);
    printf("fib(%d) = %lu calls = %lu\n", n, 2*fib(n+1) - 2, fib(n));
  }
  return 0;
}
