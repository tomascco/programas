/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int main() {
	int i;
	int v[10];
	for (i = 0; i < 10; i++)
		scanf("%d", &v[i]);
	for (i = 0; i < 10; i++) {
		if (v[i] <= 0)
			v[i] = 1;
		printf("X[%d] = %d\n", i, v[i]);
	}
	return 0;
}
