#include "stdafx.h"
#include "menu.h"
#include "ControladorGeneral.h"

int main()
{
	int startChoice = start();
	actions(startChoice);
	_getch();
	return 0;
}
