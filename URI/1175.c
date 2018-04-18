/*
Autor: Tomás de Carvalho Coelho, Eng comp, 418391
*/

#include <stdio.h>

int main() {
	int i;
	int v[20];
	for (i = 0; i < 20; i++)
		scanf("%d", &v[i]);
	// for (i = 0; i < 10; i++) {
	// 	v[i] = v[i] + v[19-i];
	// 	v[19-i] = v[i] - v[19-i];
	// 	v[i] = v[i] - v[19-i];
	// }
	for (i = 0; i < 20; i++) {
		printf("N[%d] = %d\n", i, v[19-i]);
	}
	return 0;
}
