#include "main.h"
#include <stdlib.h>
/**
* _strdup - function that allocates space in memory
* @str: input string
*
* Return: returns a pointer to a newly allocated space in memory
*
*/

char *_strdup(char *str)
{
	char *duplicate;
	int i = 0, len = 0;

	duplicate = malloc(sizeof(char) * (len + 1));
	if (str == 0 || duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
		len++;
	}
	duplicate[len] = '\0';
	return (duplicate);
}
