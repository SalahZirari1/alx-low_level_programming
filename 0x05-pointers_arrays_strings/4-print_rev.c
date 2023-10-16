#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 */

void _print_rev(char *s)
{
        int i;
	int lenStr;

	lenStr = _strlen(s);
	
        for (i = lenStr; i != 0; i--)
        {
                _putchar(s[i]);
        }
        _putchar('\n');
}


