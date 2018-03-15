#pragma once
#define CONCATENATENAMES(var1, var2) printf("El nombre de la variable 1 es: %s \nEl nombre de la variable 2 es: %s\n", #var1, #var2); printf("Los nombres unidos son: %s", #var1###var2);									
bool compareString(char string1[], char string2[]);
