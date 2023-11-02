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
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	p = (char *)malloc(sizeof(s1 + n) + 1);

	if (p == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		p = s1;
		p++;
		s1++;
	}
	
	for (i = 0; *s2 != '\0' && i < n + 1; i++)
	{
		p = s2;
		p++;
		s2++;
	}

	p = '\0';

	return (p);

}
