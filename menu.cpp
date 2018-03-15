#include "stdafx.h"
#include "ControladorGeneral.h"

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
void actions(int startChoice)
{
	switch (startChoice)
	{
	case 1:
		squaring();
		break;
	case 2:
		add();
		break;
	case 3:
		area();
		break;
	case 4:
		maximum();
		break;
	case 5:
		names();
		break;
	case 6:
		callText();
		break;
	case 7:
		callCompareString();
		break;
	case 8:
		callSwap();
		break;
	case 9:
		binaryChoice();
		break;
	case 10:
		exit(0);
		break;
	default:
		printf("NO ES CORRECTO");
		break;
	}
}