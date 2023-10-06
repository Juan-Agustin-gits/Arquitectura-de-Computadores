#include <stdio.h>
#include <stdbool.h>
// Problema 1
int isZero(int x) {/* Si la variable es nula, retorna 1. De lo contrario, retorna 0 (gcc (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0)*/
	return !x;
}

// Problema 2
int minusOne(void) {// retorna un -1 (gcc (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0)
	return ~0;
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
int isNotEqual(int x, int y) { // 1 si x!=0, 0 si x=y
    //Aplica XOR y luego doble negacion, por lo que solo si el XOR da bits nulos (0x000...0) da 0, de otro modo da 1 
    return !!(x ^ y);
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
int isGreater(int x, int y) { //Devuelve 1 si x>y, 0 en otro caso
     //Obtener la diferencia
    int resta = x + (~y + 1);
    // Consigue el bit que indica el signo y lo guarda
    int signo = (resta >> 31) & 1;
    // Compara el signo y la diferencia para diferenciar el caso x=y y una negacion para obtener el formato pedido
    return !(signo | (!resta));
}

// Problema 9
int reverseBytes(int x) { // Invierte los Bytes de X
    //Se Separa X en bytes distintos
    int byte1 = (x >> 24) & 0xFF;
    int byte2 = (x >> 16) & 0xFF;
    int byte3 = (x >> 8) & 0xFF;
    int byte4 = x & 0xFF;
    //Se escriben al reves.
    return (byte1) | (byte2 << 8) | (byte3 << 16) | (byte4 << 24);
}

// Problema 10
int isPower2(int x) { // Entrega 1 si es potencia de 2 y 0 en otro caso
	// Opera el numero x con x - 1, lo que dara un bit 000...0 si es potencia de 2, al negarlo da 1 y se agrega !!x para cubrir el caso x = 0.
	return (!(x & (x + ~0))) & (!!x);
}

int main() {
	printf("%d \n", isZero(0));
	printf("%d \n", minusOne());
	printf("%d\n", bitNor(4,5));
	printf("%d \n", getByte(0x12345678, 1) );
	printf("%d \n", isNotEqual(5, 7) );
	printf("%d \n", negate(7) );
	printf("%d \n", isPositive(5) );
	printf("%d \n", isGreater(5, 3) );
	printf("%d \n", reverseBytes(0x01020304) );
	printf("%d \n", isPower2(1) );
	return 0;
}
/*
Integrantes (GRUPO 29):

	Juan Agustin Umaña Silva
	Martin Alonso Lara Castro
	Benjamin Cristobal Villarroel Rubio
*/