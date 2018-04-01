/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  double seno = 0, argumento, fatorial = 1, alternador = 1;
  printf("Insira um arco em graus para calcular seu seno: ");
  scanf("%lf", &argumento);
  argumento *= M_PI / 180; // convertendo graus para radianos
  seno += argumento; // como o primeiro termo eh 0!, ele fica de fora do for
  for (int i = 1; i < 30; i+=2) { // com o contador andando de 2 em 2, para 14 termos: i < 30
    alternador *= -1;
    fatorial = fatorial * (i+1) * (i+2); // calculo dos fatoriais impares: 3!, 5!, etc
    seno += alternador * pow(argumento, 2 + i) / fatorial;
  }
  printf("O seno eh: %lf\n", seno);
  return 0;
}
