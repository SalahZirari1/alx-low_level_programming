#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int i;
	int lenStr;
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	
	lenStr = _strlen(s);

	for (i = lenStr; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
