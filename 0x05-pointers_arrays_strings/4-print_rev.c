#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */

 /** _strlen - returns length of str
 * @s: string
 */

void print_rev(char *s)
{
	int i;
	int lenStr;

	lenStr = _strlen(s);

	for (i = lenStr; i > -1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
