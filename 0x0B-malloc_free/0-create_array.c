#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array
 * @size: size
 * @c: char
 *
 * Return: null or pointer
 */

char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);


	array = (char *)malloc(size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
