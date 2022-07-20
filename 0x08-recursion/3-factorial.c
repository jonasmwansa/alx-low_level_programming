#include <stdio.h>
#include "main.h"

/**
* factorial - print a number
* @n:input number
* Retrun : Always return 0.
*/

int factorial(int n)
{
	if ( n != 0)
	{
		return n  * factorial(n-1);
	}

	return 0;
}
