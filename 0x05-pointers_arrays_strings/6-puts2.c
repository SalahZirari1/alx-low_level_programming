#include "main.h"

/**
 * puts2 - prints every other chrachter of a str
 *
 * @str: string
 */

void puts2(char *str)
{
	int i;
	int c;

	c = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[i]);
		}
		c++;
	}
	_putchar('\n');

}
