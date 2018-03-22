#include <stdio.h>
#include <math.h>

int main() {
  float temp_celsius;
  printf("Insira a temperatura em celsius: ");
  scanf("%f", &temp_celsius);
  // considerando a formula fisica de conversao:
  printf("A temperatura em fahrenheit eh: %.2f\n", temp_celsius * 1.8 + 32);



  return 0;
}
