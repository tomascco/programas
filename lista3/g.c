/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
DECLARE idade NUMERICO
RECEBA idade
SE idade < 5
  ESCREVA "Muito novo"
SENÃO SE idade >= 5 E idade <= 7
  ESCREVA "Infantil"
SENÃO SE idade >=8 E idade <= 10
  ESCREVA "Infanto-Juvenil"
SENÃO SE idade >= 11 E idade <= 15
  ESCREVA "Juvenil"
SENÃO SE idade >= 16 E <= 30
  ESCREVA "Adulto"
SENÃO SE idade > 30
  ESCREVA "Master"
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int idade;
  printf("Entre com a sua idade: ");
  scanf("%d", &idade);
  switch (idade) {
    case 5 ... 7: // para as categorias usarei o 'case range',  sintaxe só aceita no gcc e no clang: https://stackoverflow.com/questions/36748934/how-can-i-use-ranges-in-a-switch-case-statement-in-c
      printf("Sua categoria eh: Infantil\n");
      break;
    case 8 ... 10:
      printf("Sua categoria eh Infanto-Juvenil\n");
      break;
    case 11 ... 15:
      printf("Sua categoria eh Juvenil\n");
      break;
    case 16 ... 30:
      printf("Sua categoria eh Adulto\n");
      break;
    default: // para o caso de idade maior que 30 e idade menor que 5 é usado um if dentro do default, para cobrir esses casos
      if (idade < 5)
        printf("Muito novo!\n");
      else if (idade > 30)
        printf("Sua categoria eh Master\n");
  }
  return 0;
}
