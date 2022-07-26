#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first input string
 * @s2: second input string
 *
 * Return: returns NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int s_len1, s_len2, i, j;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	for (s_len1 = 0; s1[s_len1] != '\0'; s_len1++)
		continue;
	for (s_len2 = 0; s2[s_len2] != '\0'; s_len2++)
		continue;
	str = malloc(s_len1 + s_len2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (i < s_len1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;

	while (i < (s_len1 + s_len2))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}