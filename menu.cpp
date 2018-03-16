#include "stdafx.h"

int start() 
{
	int startChoice;
	std::locale::global(std::locale("spanish"));
	printf("\nBienvenido, elije una opción y presiona ENTER\n");
	printf(" 1_ El cuadrado de un número\n");
	printf(" 2_ Sumar dos números\n");
	printf(" 3_ El área de un círculo\n");
	printf(" 4_ El máximo de dos números\n");
	printf(" 5_ Concatenación de nombres de variables \n");
	printf(" 6_ Imprimir por pantalla un texto\n");
	printf(" 7_ Comparación de cadena\n");
	printf(" 8_ Operaciones lógicas\n");
	printf(" 9_ Operaciones binarias\n");
	printf("10_ Salir\n");
	scanf_s("\n%d", &startChoice);
	return startChoice;
}
