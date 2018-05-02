/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
Problema: [vet] L3 - Mercantil V3
*/

#include <stdio.h>

int main() {
  int quant_prod, pont_pri = 0, pont_seg = 0;
  scanf("%d", &quant_prod);
  float preco[quant_prod], chute_preco[quant_prod];
  char chute[quant_prod];
  for (int i = 0; i < quant_prod; i++)
    scanf("%f", &preco[i]);
  for (int i = 0; i < quant_prod; i++)
    scanf("%f", &chute_preco[i]);
  for (int i = 0; i < quant_prod; i++)
    scanf(" %c", &chute[i]);

  for (int i = 0; i < quant_prod; i++) {
    if (preco[i] == chute_preco[i])
      pont_pri++;
    else if (preco[i] > chute_preco[i] && chute[i] == 'M')
      pont_seg++;
    else if (preco[i] < chute_preco[i] && chute[i] == 'm')
      pont_seg++;
    else
      pont_pri++;
  }
  if (pont_pri == pont_seg)
    printf("empate");
  else if (pont_pri > pont_seg)
    printf("primeiro");
  else
    printf("segundo");
  return 0;
}
