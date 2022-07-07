#include "main.h"
/**
 *print_to_98 - print all natural numbers
 *@n: varibale
 *Return: no return
 */

void print_to_98(int n)
{
if (n < 98)
{
	while (n <= 98)
	{
		if (n != 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
}
else if (n > 98)
{
	while (n >= 98)
	{
		if (n != 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
}
else if (n==98)
{
	_putchar(98);
}
	_putchar('\n');
}
