#include <stdio.h>
#include "main.h"

/**
 * _memcpy - fills string with constant char b upto n bytes
 * @src: source input pointer to string
 * @dest: destination char
 * @n: number of bytes
 * Return: pointer to dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src;
		j++;
	}
	return (dest);
}
