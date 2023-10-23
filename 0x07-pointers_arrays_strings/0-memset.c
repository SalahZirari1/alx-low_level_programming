#include "main.h"

/**
 * _memset - fills mem
 * @s: memory set
 * @b: constant
 * @n: byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return s;
}
