#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _puts - takes a point a string
* @str: pointer to the string to print
*
*/
void print_rev(char *s)
{
	char str = strrev(s);

	puts(str);
}
