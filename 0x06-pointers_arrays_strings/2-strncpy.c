#include "main.h"

/**
 * _strncpy - copies string
 *
 * @dest: dsetination
 * @src: source string
 * @n: number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (dest_istart);
}
