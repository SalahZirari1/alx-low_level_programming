#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: str 1
 * @s2: str 2
 *
 * Return: diff
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1	!= *s2)
		{
			return (*s1 - *s2);
		}

		s1++;
		s2++;

	}
	
	if (*s1 != '\0')
	{
		return (*s1);
	}
	else if (*s2 != '\0')
	{
		return (-*s2);
	}

	return (0);
}
