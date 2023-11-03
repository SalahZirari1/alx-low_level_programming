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
	int n;

	n = max - min + 1;

	if (min > max) 
		return (NULL);

	p = (int *)malloc(n * sizeof(int));

	if ( p == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
