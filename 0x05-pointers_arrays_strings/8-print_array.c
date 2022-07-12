#include <stdio.h>
#include "main.h"

/**
* print_array - print an array.
* @a: the array to print.
* @n: array's length
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(a[i]);
		if (i < n - 1)
		{
			putchar(', ');
		}
	}
	putchar('\n');
}
