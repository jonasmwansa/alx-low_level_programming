#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - takes a pointer to string and prints a string in reverse
* @s: string
* Return: Always 0.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
