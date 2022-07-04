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
	char num;

	for (num = '0'; num < '10'; num++)
	{
		putchar(num);
		if(num != '9')
		{
		
			putchar(", ");
		}
		
	}
	printf("\n");

	return (0);
}
