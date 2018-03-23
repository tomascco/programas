/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>
int main() {
  float num1, num2, resultado_op;
  int escolha;
  printf("Digite um numero: ");
  scanf("%f", &num1);
  printf("Digite outro numero: ");
  scanf("%f", &num2);
  printf("Escolha agora uma opcao:\n1 - media entre os numeros digitados\n2 - diferenca do maior pelo menor\n3 - produto entre os numeros digitados\n4 - divisao do primeiro pelo segundo\n:");
  scanf("%d", &escolha);
  switch (escolha) {
    case 1:
      printf("A media dos numeros eh: %.2f\n", (num1 + num2) / 2);
      break;
    case 2:
      if (num1 > num2)
        printf("A diferenca do maior pelo menor eh: %.2f\n", num1 - num2);
      else
        printf("A diferenca do maior pelo menor eh: %.2f\n", num2 - num1);
      break;
    case 3:
      printf("O produto dos numeros eh: %.2f\n", num1 * num2);
      break;
    case 4:
      if (num2 == 0)
        printf("A divisao nao podera ser efetuada, num2 eh 0!\n");
      else
        printf("A divisao do primeiro pelo segundo eh: %.2f\n", num1 / num2);
      break;
    default:
      printf("Escolha uma opcao valida!\n");
  }
  return 0;
}
