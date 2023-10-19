#include "main.h"

/**
 * _strncat - concates two strings
 * @dest: 1st str
 * @src : 2nd str
 * @n:n bytes
 *
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *og_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	return (og_dest);
}
