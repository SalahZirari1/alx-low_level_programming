#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: string
 *
 * return: reversed str
 */


void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	int j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
