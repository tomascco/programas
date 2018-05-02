/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L4 - Mega Jokenpo!
*/

#include <stdio.h>
#include <string.h>

int distancia_circular(int n_elementos, int pos_a, int pos_b) {
  int dist = 0;
  while (pos_a != pos_b) {
    dist++;
    pos_a++;
    if (pos_a == n_elementos+1)
      pos_a = 1;
  }
  return dist;
}

int classifica_resposta(char v[]) {
  if (strncmp(v, "rock\n", 5) == 0)
    return 1;
  else if (strncmp(v, "gun\n", 4) == 0)
    return 2;
  else if (strncmp(v, "water\n", 6) == 0)
    return 3;
  else if (strncmp(v, "air\n", 4) == 0)
    return 4;
  else if (strncmp(v, "paper\n", 6) == 0)
    return 5;
  else if (strncmp(v, "sponge\n", 7) == 0)
    return 6;
  else if (strncmp(v, "human\n", 6) == 0)
    return 7;
  else if (strncmp(v, "scissors\n", 9) == 0)
    return 8;
  else if (strncmp(v, "fire\n", 5) == 0)
    return 9;
  return -1;
}

int main() {
  char resp[9];
  int jog1, jog2, i, dist;

  i = 0;
  while ((resp[i] = getchar()) != 10)
    i++;
  jog1 =  classifica_resposta(resp);

  i = 0;
  while ((resp[i] = getchar()) != 10)
    i++;
  jog2 = classifica_resposta(resp);

  dist = distancia_circular(9, jog1, jog2);
  if (dist > 4)
    printf("jog1");
  else if (dist == 0)
    printf("empate");
  else
    printf("jog2");
  return 0;
}
