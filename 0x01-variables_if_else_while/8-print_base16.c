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
	int num;

	for (num = 0; num < 16; num++)
	{	
		if(num == 10)
		{
			num="a";
		}
		else if(num == 11)
		{
			num = "b";
		}
		else if(num == 12)
		{
			num = 'c';
		}
		else if(num == 13)
		{
			num = 'd';
		}
		else if(num == 14)
		{
			num = 'e';
		}
		else if(num == 15)
		{
			num = 'f';
		}else{
			printf("%d", num);
		}
	}
	printf("\n");

	return (0);
}
