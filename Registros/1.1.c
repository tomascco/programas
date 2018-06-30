/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

typedef struct PESSOA {
  char sexo;
  int idade;
  int num_filhos;
  double salario;

}pessoa;

int main() {
  pessoa pessoas[20];
  double media_sal = 0, media_filhos = 0;
  double maior_sal = 0, mulher_especial = 0;

  fputs("Insira os salarios: ", stdout);
  for (int i = 0; i < 50; i++) {
    scanf("%lf", &pessoas[i].salario);
    media_sal += pessoas[i].salario;
    if (pessoas[i].salario > maior_sal) {
      maior_sal = pessoas[i].salario;
    }
  }
  media_sal /= 50;

  fputs("Insira as idades: ", stdout);
  for (int i = 0; i < 50; i++) {
    scanf("%d", &pessoas[i].idade);
  }

  fputs("Insira o numero de filhos: ", stdout);
  for (int i = 0; i < 50; i++) {
    scanf("%d", &pessoas[i].num_filhos);
    media_filhos += pessoas[i].num_filhos;
  }
  media_filhos /= 50;

  fputs("Insira o sexo: ", stdout);
  for (int i = 0; i < 50; i++) {
    scanf(" %c", &pessoas[i].sexo);
  }
  getchar();
  for (int i = 0; i < 50; i++) {
    if (pessoas[i].salario > 10000 && pessoas[i].sexo == 'F') {
      mulher_especial++;
    }
  }
  mulher_especial = (mulher_especial / 50) * 100;
  return 0;
}
