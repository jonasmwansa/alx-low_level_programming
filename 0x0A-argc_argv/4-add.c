#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - cheks the fuction.
* @argc: couts the arguments passed to the function.
* @argv: gives the value for the argument passed to the function.
* Return: Returns always success.
*/

int main(int argc, char *argv[])
{
	int sum;
	int counter;
	int i;

	counter = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (counter < argc)
	{
		for (i = 0; argv[counter][i] != '\0'; i++)
		{
			if (!(isdigit(argv[counter][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[counter]);
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
