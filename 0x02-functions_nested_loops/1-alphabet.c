#include "main.h"
/**
* print_alphabet - prints all aphabets in lowercase
*
* Description: They are sorted by default
* return (0)
*/
void print_alphabet(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
