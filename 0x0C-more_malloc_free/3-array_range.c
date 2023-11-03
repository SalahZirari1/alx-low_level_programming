#include <stdlib.h>
#include "main.h"

/**
 * array_arrange - create array of ints
 * @min: min
 * @max: mx
 *
 * Return: pointer or null
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max) 
		return (NULL);

	p = (int *)malloc(max - min);

	if ( p == NULL)
		return (NULL);

	for (i = 0; p[i] < max - min; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
