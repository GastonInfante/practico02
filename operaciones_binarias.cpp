#include "stdafx.h"

void binary(int numDec)
{
	if (numDec > 0)
	{
		binary(numDec / 2);
		printf("%d", numDec % 2);
	}
	else
	{
		if (numDec == 0) printf("%d", 0);
	}
}
