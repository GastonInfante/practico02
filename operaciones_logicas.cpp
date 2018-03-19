#include "stdafx.h"
#include "operaciones_logicas.h"

void swap(int num1, int num2)
{ 
	printf("El primer valor ingresado fue: %d y el segundo: %d\n", num1, num2);
	SWAP(num1,num2);
	printf("Los valores han sido cambiados exitosamente\nAhora el primer valor es: %d y el segundo: %d", num1, num2);
}