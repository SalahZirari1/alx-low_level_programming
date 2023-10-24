#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates string
 * @haystack: str to seach in
 * @needle: substring to find
 *
 * Return: pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *str, *k;

	while (*haystack != '\0')
	{
		str = haystack;
		k = needle;

		while (*haystack == *k && *k != '\0')
		{
			haystack++;
			k++;
		}

		if (*k == '\0')
			return (str);
		haystack = str + 1;
	}
	return (NULL);
}
