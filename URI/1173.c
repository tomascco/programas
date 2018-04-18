/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int main() {
	int i;
	int v[10];
	scanf("%d", v);
	for (i = 0; i < 10; i++)
		printf("N[%d] = %d\n", i, v[0] * (1 << i));
	return 0;
}
