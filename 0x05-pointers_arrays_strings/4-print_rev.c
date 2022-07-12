#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _puts - takes a point a string
* @str: pointer to the string to print
*
* print_rev - takes a pointer to string and prints a string in reverse
* @s: string
* Return: Always 0.
*/

void print_rev(char *s)
{
	char str = strrev(s);
	int len = 0;
	int i;
	
	for (i = len; i > 0; i--)
	{
		putchar(*s);
		s--;
	}

}
