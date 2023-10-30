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
	int i;

	if (str == NULL)
		return (NULL);

	space = (char *)malloc(sizeof(str));

	i = 0;	
	while (str[i] != '\0')
	{
		space[i] = str[i];
	}
	return (space);
}
