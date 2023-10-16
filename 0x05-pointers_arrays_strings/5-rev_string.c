#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
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

	char reversed[len];

	for (i = len - 1; i > -1; i--)
	{
		reversed[i] = s[i];
	}

}
