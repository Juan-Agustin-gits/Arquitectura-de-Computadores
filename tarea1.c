#include <stdio.h>
#include <stdbool.h>
// Problema 1
int isZero(int x) {/* Si la variable es nula, retorna 1. De lo contrario, retorna 0 (gcc (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0)*/
	return !x;
}

// Problema 2
int minusOne(void) {// retorna un -1 (gcc (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0)
	return -1;
}

//Problema 3
int bitNor(int x, int y) {// hace ~(x|y) pero sin usar el OR | (gcc (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0)
	return ~x & ~y;
}

// Problema 4
int getByte(int x, int n) {// extrane el byte n de un word (gcc (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0)
	return (!((x>>30)>>1));
}

// Problema 5
int isNotEqual(int x, int y) {
	return 0;
}

// Problema 6
int negate(int x) {// retorna el negativo de n (gcc (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0)
	return ~x+1;
}

// Problema 7
int isPositive(int x) {//Devuelve 1 si x>0 y 0 si no lo es (Devuelve 1 si x>0 y 0 en otro caso.)
	return ( ! ( ( x >> 30 ) >> 1 ) );
}

// Problema 8
int isGreater(int x, int y) {
	return 0;
}

// Problema 9
int reverseBytes(int x) {
	return 0;
}

// Problema 10
int isPower2(int x) {
	return 0;
}

int main() {
	/*int x;
		scanf("%d", &x);
		printf("%d \n", isZero(x));*/

	//printf("%d \n", minusOne());

	//printf("%d\n", bitNor(4,5));

	printf("%d \n", getByte(0x12345678, 1) );
	return 0;
}
