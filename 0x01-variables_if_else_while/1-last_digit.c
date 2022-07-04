#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
*  main - Entry point of the program
*  Return: Always 0 (Success)
*/

int main(void)
{

		int n;
		int value;
		char str[] = "Last digit of";

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		value = n % 10;
		if (value > 5)
		{
		printf("%s %d is %d and is greater than 5\n", str, n, value);
		}else if (value == 0)
		{
		printf("%s %d is %d and is 0\n", str, n, value);
		}else if (value < 6)
		{
			printf("%s %d is %d and is less than 6 and not 0\n", str, n, value);
		}

		return (0);
}
