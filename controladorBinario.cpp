#include "stdafx.h"
#include "operaciones_binarias.h"
#include "main.h"
#include "ControladorGeneral.h"


void BinaryOperations(int choice) 
{
	std::locale::global(std::locale("spanish"));
	int num1, num2;
	int result;
	int numBin = 0;
	
	switch (choice)
	{
	case 1:
		printf("Ingrese dos números enteros mayores o iguales a 0 y presione ENTER\n");
		scanf_s("%d\n %d", &num1, &num2);
		if (num1 >= 0 & num2 >= 0) {
			system("cls");
			printf("AND\nEl primer valor es:\n");
			binary(num1);
			printf("\nEl segundo valor es:\n");
			binary(num2);
			result = num1 & num2;
			printf("\nEl resultado es:\n");
			binary(result);
		}
		else
		{
			printf("INCORRECTO... Ingrese valores mayores o iguales a 0");
		}
			break;
		case 2:
			printf("Ingrese dos números enteros mayores o iguales a 0 y presione ENTER\n");
			scanf_s("%d\n %d", &num1, &num2);
			if (num1 >= 0 & num2 >= 0) {
				system("cls");
				printf("AND\nEl primer valor es:\n");
				binary(num1);
				printf("\nEl segundo valor es:\n");
				binary(num2);
				result = num1 | num2;
				printf("\nEl resultado es:\n");
				binary(result);
			}
			else
			{
				printf("INCORRECTO... Ingrese valores mayores o iguales a 0");
			}
			break;
		case 3:
			printf("Ingrese un números entero mayor o igual a 0 y presione ENTER\n");
			scanf_s("%d", &num1);
			if (num1 >= 0) {
				system("cls");
				printf("\nEl primer valor es:\n");
				binary(num1);
				printf("\nBits movidos exitosamente hacia la derecha:\n");
				result = num1 >> 2;
				printf("El resultado es:\n");
				binary(result);
			}
			else
			{
				printf("INCORRECTO... Ingrese un valor mayor o igual a 0");
			}
			break;
		case 4:
			printf("Ingrese un números entero mayor o igual a 0 y presione ENTER\n");
			scanf_s("%d", &num1);
			if (num1 >= 0) {
				system("cls");
				printf("\nEl primer valor es:\n");
				binary(num1);
				printf("\nBits movidos exitosamente hacia la izquierda:\n");
				result = num1 << 2;
				printf("El resultado es:\n");
				binary(result);
			}
			else
			{
				printf("INCORRECTO... Ingrese un valor mayor o igual a 0");
			}

			break;
		case 5:
			system("cls");
			main();
			break;
		default:
			printf("Opción inválida");
			break;
	}
}
