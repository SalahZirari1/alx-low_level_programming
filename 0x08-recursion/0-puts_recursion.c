#include "main.h"

/**
 * _puts_recursion - prints
 * @s:str
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
