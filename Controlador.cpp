#include "stdafx.h"
#include "menu.h"
#include "operaciones_matematicas.h"
#include "operaciones_preprocesador.h"

void potencia()
{
	std::locale::global(std::locale("spanish"));
	int a;
	int b;
	printf("Ingrese un número y presione ENTER\n");
	scanf_s("%d", &a);
	b = numeroAlCuadrado(a);
	printf("El cuadrado de %d es: %d\n", a, b);
}

void suma()
{
	std::locale::global(std::locale("spanish"));
	int a;
	int b;
	int c;
	printf("Ingrese dos números y presione ENTER\n");
	scanf_s("%d\n %d", &a, &b);
	c = sumaNumeros(a, b);
	printf("La suma de %d y %d es: %d", a, b, c);
}

void area() 
{
	std::locale::global(std::locale("spanish"));
	float diametro;
	float area;
	printf("Ingrese el diámetro del circulo\n");
	scanf_s("%f", &diametro);
	area = calculararea(diametro);
	printf("\nEl diametro es: %f y el área es: %f ", diametro, area);
}

void maximo()
{
	std::locale::global(std::locale("spanish"));
	int a;
	int b;
	int c;
	printf("Ingrese dos números y presione ENTER\n");
	scanf_s("%d\n %d", &a, &b);
	c = MAX(a, b);
	printf("La máximo de %d y %d es: %d", a, b, c);
}

void acciones(int a)
{
	int x;
	x = a;
	switch (x)
	{
		case 1:
			potencia ();
			break;
		case 2:
			suma();
			break;
		case 3:
			area();
			break;
		case 4:
			maximo();
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		default:
			printf("NO VALIDO");
			break;
	}
}



