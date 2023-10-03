#include <stdio.h>
// Problema 1
int isZero(int x) {
	/* Si la variable es nula, retorna 1. De lo contrario, retorna 0 */
	return !x;
}

int main() {
	int x = 0;
	printf("%d\n", isZero(x));
	x = 3;
	printf("%d\n", isZero(x));
}
