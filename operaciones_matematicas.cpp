#include "stdafx.h"
#include "operaciones_matematicas.h"
int numeroAlCuadrado(int numero)
{
	int a = 0;
	a = numero * numero;
	return a;
}

int sumaNumeros(int a, int b)
{
	int x = 0;
	x = a + b;
	return x;
}

float calculararea(float diametro)
{
	float radio = diametro * .5f;
	float a;
	a = (PI * (radio * radio));
	return a;
}

