/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

void bubble_sort(int n, int v[]) {
   int trocou;
   do {
     trocou = 0;
     for (int i = 0; i < (n-1); i++) {
       if (v[i] > v[i+1]) { // troca das posições das variáveis
         v[i] = v[i] + v[i+1];
         v[i+1] = v[i] - v[i+1];
         v[i] = v[i] - v[i+1];
         trocou++;
       }
     }
   }
   while(trocou);
}

int main() {
  int n, elemento_atual;
  scanf("%d", &n);
  int v[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);
  bubble_sort(n, v);
  for (int i = 0; i < n; i++) {
    elemento_atual = v[i];
    if (v[i] == v[i+1])
  }
  return 0;
}
