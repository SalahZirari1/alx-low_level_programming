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


	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}

	if (c == '\0')
	{
		return ((char *)s);
	}

	return (NULL);
}
