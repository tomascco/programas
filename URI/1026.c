/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
1 1
1 2
2 2
2 3
3 3
4 1
1 4
10 10
21 10
21 14
123 321
0 0
2863311530 1431655765
4294967295 4294967295

FIM_ALGORITMO
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
