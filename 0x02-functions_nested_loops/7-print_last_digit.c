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
	int last_digit;

	last_digit = n % 10;
	return (last_digit);
}
