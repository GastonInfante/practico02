#include "stdafx.h"

int start() 
{
	int startChoice;
	std::locale::global(std::locale("spanish"));
	printf("\nBienvenido, elije una opci�n y presiona ENTER\n");
	printf(" 1_ El cuadrado de un n�mero\n");
	printf(" 2_ Sumar dos n�meros\n");
	printf(" 3_ El �rea de un c�rculo\n");
	printf(" 4_ El m�ximo de dos n�meros\n");
	printf(" 5_ Concatenaci�n de nombres de variables \n");
	printf(" 6_ Imprimir por pantalla un texto\n");
	printf(" 7_ Comparaci�n de cadena\n");
	printf(" 8_ Operaciones l�gicas\n");
	printf(" 9_ Operaciones binarias\n");
	printf("10_ Salir\n");
	scanf_s("\n%d", &startChoice);
	return startChoice;
}
