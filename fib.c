#include <stdio.h>
#include <math.h>

int main() {
  double ant, antant, fib;
  int i, n;
  antant = 1;
  ant = 0;
  printf("\nDigite um numero n e sera mostrado o n-simo numero da sequencia fibonacci: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    fib = ant + antant;
    antant = ant;
    ant = fib;
  }
  printf("\nSeu numero eh: %0.0lf\n\n", fib);


return 0;
}
