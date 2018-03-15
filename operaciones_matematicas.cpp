#include "stdafx.h"
#include "operaciones_matematicas.h"

int numSquared(int numero)
{
	int result = 0;
	result = numero * numero;
	return result;
}

int sumNum(int a, int b)
{
	int x = 0;
	x = a + b;
	return x;
}

float calculatearea(float diametro)
{
	float radio = diametro * .5f;
	float result;
	result = (PI * (radio * radio));
	return result;
}

