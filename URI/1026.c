/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/
#include <stdio.h>
#include <math.h>

int main() {
  unsigned long int a, b;
  while (scanf("%lu %lu", &a, &b) == 2){
    printf("%lu\n",(unsigned long int) a ^ b);
  }
  return 0;
}
