/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE preco_produto NUMERICO
RECEBA preco_produto
SE preco_produto <= 50
  preco_produto ← preco_produto * 1.05
SENÃO SE preco_produto > 50 E preco_produto <= 100
  preco_produto ← preco_produto * 1.10
SENÃO SE preco_produto > 100
  preco_produto ← preco_produto * 1.15
SE preco_produto <= 80
  ESCREVA "D"
SENÃO SE preco_produto > 80 E preco_produto <= 120
  ESCREVA "C"
SENÃO SE preco_produto > 120 E preco_produto <= 200
  ESCREVA "B"
SENÃO SE preco_produto > 200
  ESCREVA "A"
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
// limites do intervalo de  Classificacao:
#define LIMITE_1_C 80
#define LIMITE_2_C 120
#define LIMITE_3_C 200
// limites do intervalo de Reajuste:
#define LIMITE_1_R 50
#define LIMITE_2_R 100

int main() {
  float preco_produto;
  printf("Insira o preco antigo do produto: ");
  scanf("%f", &preco_produto);
  if (preco_produto <= LIMITE_1_R) // faixa 1: aumento: 5%
    preco_produto *= 1.05;
  else if (preco_produto > LIMITE_1_R && preco_produto <= LIMITE_2_R) //faixa 2: aumento 10%
    preco_produto *= 1.10;
  else if (preco_produto > LIMITE_2_R) // faixa3: aumento: 15%
    preco_produto *= 1.15;
  else
    printf("Digite um valor valido!\n");
  if (preco_produto <= LIMITE_1_C) // faixa 1: Classificacao D
    printf("Seu produto custa %.2f e recebe classificacao D\n", preco_produto);
  else if (preco_produto > LIMITE_1_C && preco_produto <= LIMITE_2_C) // faixa 2: classificacao C
    printf("Seu produto custa %.2f e recebe a classificacao C\n", preco_produto);
  else if (preco_produto > LIMITE_2_C && preco_produto <= LIMITE_3_C) // faixa 3: classificacao B
    printf("Seu produto custa %.2f e recebe a classificacao B\n", preco_produto);
  else if (preco_produto > LIMITE_3_C) // faixa 4: classificacao A
    printf("Seu produto custa %.2f e recebe a classificacao A\n", preco_produto);
  return 0;
}
