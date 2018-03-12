
#include "stdafx.h"

void start() 
{
	int a = 0;
	printf("Bienvenido, elije una opcion y presiona ENTER\n");
	printf("1_ El cuadrado de un numero\n");
	printf("2_ Sumar dos números\n");
	printf("3_ El área de un círculo\n");
	printf("4_ El máximo de dos números\n");
	printf("5_ Ingrese su nombre y apellido\n"); //Concatenación de nombres de variables(para darle un fin más practico)
	printf("6_ Imprimir por pantalla un texto\n");
	printf("7_ Comparación de cadena\n");
	printf("8_ Operaciones binarias\n");
	printf("9_ Operaciones lógicas\n");
	printf("10_ Salir\n");
	scanf_s("%d\n", &a);
}