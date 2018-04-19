/*[vet] L3 - Mário e o Assassins Creed - Parkour
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L3 - Mário e o Assassins Creed - Parkour
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, parkour = 0;
  scanf("%d", &n);
  int v[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);
  for (int i = 0; i < (n-1); i++) {
    if (abs(v[i] - v[i+1]) > 1)
      parkour++;
  }
  printf("%d", parkour);

  return 0;
}
