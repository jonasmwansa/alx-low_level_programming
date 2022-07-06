#include "main.h"
/**
 *
 *  print_alphabet_x10 - prints alphabets 10
 *
 *   
 *
 *  Description: prints 10 times
 *
 *   Return: Always(0).
 */

void print_alphabet_x10(void)
{
	int count = 0;
	
	while (count < 10)
	{
		char i;
			
		for ( i = 'a'; i < 'z'; i++)
		{
			_putchar(i);
		}
	count++;
	_putchar('\n');
	}
}
