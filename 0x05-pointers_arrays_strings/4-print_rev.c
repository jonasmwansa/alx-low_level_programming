#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - takes a pointer to string and prints a string in reverse
* @s: string
* Return: Always 0.
*/

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		++s;
	}

	s--;

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}
