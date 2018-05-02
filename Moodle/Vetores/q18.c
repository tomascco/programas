/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L3 - Zoologico Um animal de cada tipo!
*/

#include <stdio.h>

void troca_valor(int* a, int* b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}

void bubble_sort(int n, int v[]) {
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
  int v[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);
  bubble_sort(n, v);
  for (int i = 0; i < n; i++) {
    if (v[i] != v[i+1])
      printf("%d ", v[i]);
  }
  return 0;
}
