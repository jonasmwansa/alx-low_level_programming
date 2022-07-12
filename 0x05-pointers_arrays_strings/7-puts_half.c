#include "main.h"
#include <stdio.h>

/**
* puts_half - print half
* @str: input string
*
* Description: prints half of a string
* Return: Always (0);
*/

void puts_half(char *str)
{
	int i, len;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		len = (i + 1) / 2;

		while (str[len] != '\0')
		{
			_putchar(str[len]);
			len++;
		}
	}
	else
	{
		len= (i / 2);

		while (str[len] != '\0')
		{
			_putchar(str[len]);
			len++;
		}
	}
	_putchar('\n');
}
