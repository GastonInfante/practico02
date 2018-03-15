#include "stdafx.h"
#include "operaciones_logicas.h"

void swap(int num1, int num2)
{ 
	system("cls");
	printf("Los valores ingresados fueron: %d y %d", num1, num2);
	SWAP(num1,num2);
	printf("Los valores han sido cambiados exitosamente\nAhora el primer valor es:%d y el segundo:%d", num1, num2);
}