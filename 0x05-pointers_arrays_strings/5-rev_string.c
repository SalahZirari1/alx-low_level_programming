#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 *
 * return: reversed str
 */

void rev_string(char *s)
{
	int i;
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	char reversed[len + 1];

	for (i = len - 1; i > -1; i--)
	{
		reversed[i-(i-1)] = s[i];
	}

	reversed[len] = '\0';

	return (reversed);

}
