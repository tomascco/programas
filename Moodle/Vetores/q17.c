/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L4 - Se fosse a mediana eu tinha passado!
*/

#include <stdio.h>

void troca_valor(float* a, float* b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}

void bubble_sort(int n, float v[]) {
   int trocou;
   do {
     trocou = 0;
     for (int i = 0; i < (n-1); i++) {
       if (v[i] > v[i+1]) { // troca das posições das variáveis
         troca_valor(&v[i], &v[i+1]);
         trocou++;
       }
     }
   }
   while(trocou);
}

int main() {
  int n;
  scanf("%d", &n);
  float notas[n];
  for (int i = 0; i < n; i++)
    scanf("%f", &notas[i]);
  bubble_sort(n, notas);
  if (n % 2 == 1)
    printf("%.2f", notas[n/2]);
  else
    printf("%.2f", (notas[(n-1)/2] + notas[(n-1)/2 + 1]) / 2);
  return 0;
}
