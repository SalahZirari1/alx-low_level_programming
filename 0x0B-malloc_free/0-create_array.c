#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array 
 * @size: size
 * @c: char
 *
 * Return: null or pointer
 */

char *create_array(unisgned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array;
	int i;

	array = (char *)malloc(size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <size; i++)
	{
		array[i] = c;
	}

	return array;
}
