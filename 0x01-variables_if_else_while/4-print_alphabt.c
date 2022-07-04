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
	char low;

	for(low = 'a'; low<= 'z'; low++)
	{
	 	if(low == 'q' || low== 'e')
		{
	 		continue;
	 	}
		putchar(low);
	}
	printf("\n");

	return (0);
}
