#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point for program
* Return: Always 0 (Success)
*
*/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if(num != '9')
		{
			putchar(", ");
		}
	}
	printf("\n");

	return (0);
}
