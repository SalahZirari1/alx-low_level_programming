#include <stdlib.h>
#include "main.h"

/**
 * _calloc - does what calloc does i guess
 * @nmemb: n of elements
 * @size: size of elements
 *
 * Return: pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = (char *)malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		p[i] = 0;

	return (p);
}
