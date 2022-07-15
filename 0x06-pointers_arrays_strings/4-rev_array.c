#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: first input
 * @n: number of elemets
 *
 * Description: reverses the content of an array of integers
 * Return: always (0)
 */

void reverse_array(int *a, int n)
{
	int lt, rt,  tmp;

	lt = 0;
	rt = n - 1;

	while (lt < rt)
	{
		tmp = a[lt];
		a[lt] = a[rt];
		a[rt] = tmp;
		lt++;
		rt--;
	}
}
