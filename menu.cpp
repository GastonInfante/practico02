
#include "stdafx.h"

void start() 
{
	int a = 0;
	printf("Bienvenido, elije una opcion y presiona ENTER\n");
	printf("1_ El cuadrado de un numero\n");
	printf("2_ Sumar dos n�meros\n");
	printf("3_ El �rea de un c�rculo\n");
	printf("4_ El m�ximo de dos n�meros\n");
	printf("5_ Ingrese su nombre y apellido\n"); //Concatenaci�n de nombres de variables(para darle un fin m�s practico)
	printf("6_ Imprimir por pantalla un texto\n");
	printf("7_ Comparaci�n de cadena\n");
	printf("8_ Operaciones binarias\n");
	printf("9_ Operaciones l�gicas\n");
	printf("10_ Salir\n");
	scanf_s("%d\n", &a);
}