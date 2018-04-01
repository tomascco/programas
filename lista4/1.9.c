/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391

ALGORITMO

FIM_ALGORITMO
*/
#include <stdio.h>
#include <math.h>

int main() {
  int num_notas;
  double nota_atual, maior_nota = 0, segunda_nota = 0, acumulador_notas = 0;
  printf("Insira o numero de notas a serem digitadas: ");
  scanf("%d", &num_notas);
  for (int i = 1; i <= num_notas; i++) {
    printf("\nInsira a nota do aluno %d: ", i);
    scanf("%lf", &nota_atual);
    if (nota_atual > maior_nota) {
      segunda_nota = maior_nota;
      maior_nota = nota_atual;
    }
    else if (nota_atual > segunda_nota)
      segunda_nota = nota_atual;
    acumulador_notas += nota_atual;
  }
  printf("As duas maiores notas sao: %.2lf e %.2lf\n", maior_nota, segunda_nota);
  printf("A media da turma eh: %.2lf\n", acumulador_notas / num_notas);
  return 0;
}
