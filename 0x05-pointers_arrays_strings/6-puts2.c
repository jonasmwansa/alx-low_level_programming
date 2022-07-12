#include "main.h"
#include <stdio.h>

/**
 * puts2 - takes a point to characters and prints characters
 * @str: point to input string
 *
 * Description: prints character of a string, starting first character
 * Return: Always (0)
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
