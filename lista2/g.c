/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO
  DECLARE sal, sal_min NUMERICO
  ESCREVA "Insira o valor do salario minimo"
  LEIA sal_min
  ESCREVA "Insira o valor do salario do funcionario"
  LEIA sal
  ESCREVA "O funcionario recebe um salario " , sal / sal_min , "vezes maior que o salario minimo"
FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  float sal, sal_min;
  printf("Insira o valor do salario minimo: ");
  scanf("%f", &sal_min);
  printf("Insira o valor do salario do funcionario: ");
  scanf("%f", &sal);
  printf("O funcionario recebe um salario %.2f vezes maior que o salario minimo.\n",sal / sal_min);




  return 0;
}
