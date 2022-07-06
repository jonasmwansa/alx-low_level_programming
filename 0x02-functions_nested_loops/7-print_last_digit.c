#include "main.h"
/**
* print_last_digit - prints the lest digit
* @n: first parameter
*
* Description: prints the last digit
* Return: Always (0).
*/

int print_last_digit(int n)
{
	int p;

	p = (n % 10);

	if (p < 0)
	{
		p = (-1 * p);
	}

	_putchar(p + '0');
	return (p);
}
