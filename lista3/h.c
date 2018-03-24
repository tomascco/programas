/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

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
  if (peso < 60) // sequencia de if's para classificar o peso nos intervalos
    intervalo = 1;
  else if (peso >= 60 && peso <= 90)
    intervalo = 2;
  else
    intervalo = 3;
  switch (idade) { // para as idades sera usado o 'case range'.
    case 20 ... 50:
      switch (intervalo) { // classificacao dos pesos dentro de cada intervalo de idade O.o
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
      break;
    default:
      if (idade < 20) { // classificacao de pesos dentro do intervalo idade menor que 20
        switch (intervalo) {
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
    }
  return 0;
  }
