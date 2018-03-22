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
