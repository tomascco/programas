/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE idade, intervalo, peso NUMERICO
RECEBA idade, intervalo, peso
SE peso <= 60
  intervalo ← 1
SENÃO SE peso > 60 E peso <= 90
  intervalo ← 2
SENÃO
  intervalo ← 3
SE idade < 20
  INCIO
  SE intervalo = 1
    ESCREVA "9"
  SENÃO SE intervalo = 2
    ESCREVA "8"
  SENÃO SE intervalo = 3
    ESCREVA "7"
  FIM
SE idade >= 20 E idade <= 50
  INCIO
  SE intervalo = 1
    ESCREVA "6"
  SENÃO SE intervalo = 2
    ESCREVA "5"
  SENÃO SE intervalo = 3
    ESCREVA "4"
  FIM
SE idade > 50
  INCIO
  SE intervalo = 1
    ESCREVA "3"
  SENÃO SE intervalo = 2
    ESCREVA "2"
  SENÃO SE intervalo = 3
    ESCREVA "1"
  FIM
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  float peso;
  int idade, intervalo; // intervalo é uma variavel que tera valor atribuido com base no intervalo
  printf("Entre com sua idade: "); // em que o peso se encontra: 1 - ate 60, 2 - entre 60 e 90(incluso)
  scanf("%d", &idade);             // 3 - acima de 90.
  printf("Entre com seu peso: ");
  scanf("%f", &peso);
  if (peso <= 60) // sequencia de if's para classificar o peso nos intervalos
    intervalo = 1;
  else if (peso > 60 && peso <= 90)
    intervalo = 2;
  else
    intervalo = 3;
  if (idade < 20) { // teste das idades
      switch (intervalo) { // classificacao dos pesos dentro de cada intervalo de idade O.o
        case 1:
          printf("Seu grupo de risco eh: 9\n");
          break;
        case 2:
          printf("Seu grupo de risco eh: 8\n");
          break;
        case 3:
          printf("Seu grupo de risco eh: 7\n");
          break;
      }
  }
      else if (idade >= 20 && idade <= 50) { // classificacao de pesos dentro do intervalo idade menor que 20
        switch (intervalo) {
          case 1:
            printf("Seu grupo de risco eh: 6\n");
            break;
          case 2:
            printf("Seu grupo de risco eh: 5\n");
            break;
          case 3:
            printf("Seu grupo de risco eh: 4\n");
            break;
        }
      }
      else { // classificacao de pesos dentro do intervalo idade maior que 50
        switch (intervalo) {
          case 1:
            printf("Seu grupo de risco eh: 3\n");
            break;
          case 2:
            printf("Seu grupo de risco eh: 2\n");
            break;
          case 3:
            printf("Seu grupo de risco eh 1\n");
            break;
        }
      }
    return 0;
  }
