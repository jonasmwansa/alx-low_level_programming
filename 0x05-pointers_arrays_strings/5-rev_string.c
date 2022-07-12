#include "main.h"
#include <stdio.h>

/**
* _puts - takes a point a string
* @str: pointer to the string to print
*
*/
void rev_string(char *s)
{
	int len = 0, i, j;
	char *str, temp;

	while(len>=0)
	{
		if(s[len]=='\0')
		{
			break;
		}
		len++;
	}

	str = s;

	for(i = 0;i < (len - 1); i++)
	{
		for(j = i; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) =  *(str + (j - 1));
			*(str + (j - 1) = temp; 
		}
	}
}
