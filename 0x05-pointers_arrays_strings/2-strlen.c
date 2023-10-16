#include "main.h"

/**
 * _strlen - returns string length
 * @s: string input
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
