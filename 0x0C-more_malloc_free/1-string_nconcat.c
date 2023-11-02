#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concats 2 strs
 * @s1: str 1
 * @s2: str2
 * @n: bytes
 *
 * Return: Null or pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, l1;
	l1 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;

	p = (char *)malloc(sizeof(s1 + n) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];	
	}

	for (j = 0 ; s2[i] != '\0' && j < n + 1; j++)
	{
		p[l1 + j] = s2[j];
	}

	p[l1 + n] = '\0';

	return (p);

}
