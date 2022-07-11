#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to 98
 * @n: pointer to int n
 * Return: Always 0.
 */

int _strlen(char *s)
{
char *str;

	int len;
        
	str = "My first strlen!";
	len = _strlen(str);
	return len;
}
