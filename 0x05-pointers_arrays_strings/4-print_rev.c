#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int i;
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	

	for (i = len; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
