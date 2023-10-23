#include "main.h"

/**
 * _strchr - locates a charachter in a sterling
 * @s: string
 * @c: charachter to locate
 *
 * Return: pointer or null 
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	while (s[i] != '/0')
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
	}

	return (null);
}
