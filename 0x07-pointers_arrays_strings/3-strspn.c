#include "main.h"

/**
 * _strspn - gets len of rpefix
 * @s:segfment
 * @accept: condition bytes
 *
 * Return: number
 */

unsigned int _strspn(char *s,char *accept)
{
	unsigned int count;
	int found;

	while (*s)
	{
		found = 0;
	}

	for (int i = 0; accept [i]; i++)
	{
		if(*s == accept[i])
		{
			found = 1;
			break;
		}
	}

	if (found)
	{
		count ++;
		s++;
	}
	else
	{
		break;
	}

	return (count);
}

