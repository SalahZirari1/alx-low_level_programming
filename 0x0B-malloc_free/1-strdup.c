#include "main.h"
#include <stdlib.h>

/**
 * _strdup - like strdup
 * @str: string
 *
 * Return: null or pointer
 */

char *_strdup(char *str)
{
	char *space;
	int i, len;

	len = 0;
	while (str[len] != '\0')
		len++;

	if (str == NULL)
		return (NULL);

	space = (char *)malloc(len + 1);

	i = 0;	
	while (str[i] != '\0')
	{
		space[i] = str[i];
		i++;
	}

	space[len] = '\0';
	return (space);
}
