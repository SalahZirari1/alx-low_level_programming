#include "main.h"
#include <stddef.h>

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

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}

	return (NULL);
}
