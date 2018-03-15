#include "stdafx.h"
#include "menu.h"
#include "operaciones_matematicas.h"
#include "operaciones_preprocesador.h"
#include "operaciones_logicas.h"
#include "ControladorBinario.h"
#include "operaciones_string.h"
#include "string.h"


 void squaring()
{
	std::locale::global(std::locale("spanish"));
	int num;
	int result;
	printf("Ingrese un número y presione ENTER\n");
	scanf_s("%d", &num);
	result = numSquared(num);
	printf("El cuadrado de %d es: %d\n", num, result);
}

void add()
{
	std::locale::global(std::locale("spanish"));
	int num1;
	int num2;
	int result;
	printf("Ingrese dos números y presione ENTER\n");
	scanf_s("%d\n %d", &num1, &num2);
	result = sumNum(num1, num2);
	printf("La suma de %d y %d es: %d", num1, num2, result);
}

void area() 
{
	std::locale::global(std::locale("spanish"));
	float diameter;
	float area;
	printf("Ingrese el diámetro del circulo\n");
	scanf_s("%f", &diameter);
	area = calculatearea(diameter);
	printf("\nEl diametro es: %f y el área es: %f ", diameter, area);
}

void maximum()
{
	std::locale::global(std::locale("spanish"));
	int num1;
	int num2;
	int result;
	printf("Ingrese dos números y presione ENTER\n");
	scanf_s("%d\n %d", &num1, &num2);
	result = MAX(num1, num2);
	printf("La máximo de %d y %d es: %d", num1, num2, result);
}

void names() 
{
	int mouse = 0;
	int teclado = 0;
	CONCATENATENAMES(mouse, teclado);
}

void callText()
{
	IMP;
}

void callCompareString()
{
	system("cls");
	char str1[100];
	char str2[100];
	printf("Ingrese la primer cadena de texto y pulse ENTER\n");
	std::cin.ignore();
	std::cin.getline(str1, 100);
	printf("Ingrese la segunda cadena de texto y pulse ENTER\n");
	std::cin.getline(str2, 100);
	printf("str: %s\n", str1);
	bool result = compareString(str1, str2);
	if (result) printf("Las cadenas son iguales");
	else printf("Las cadenas son distintas");
}

void callSwap()
{
	std::locale::global(std::locale("spanish"));
	int num1;
	int num2;
	printf("Ingrese dos números y presione ENTER\n");
	scanf_s("%d\n %d", &num1, &num2);
	void swap(int num1, int num2);
}

void binaryChoice()
{
	system("cls");
	std::locale::global(std::locale("spanish"));
	int choice;
	printf("Elija una opción y presione ENTER\n 1_AND binario\n 2_OR binario\n 3_Desplazar 2 bits a la derecha\n 4_Desplazar 2 bits a la izquierda\n 5_Volver\n");
	scanf_s("%d", &choice);
	BinaryOperations(choice);

}





