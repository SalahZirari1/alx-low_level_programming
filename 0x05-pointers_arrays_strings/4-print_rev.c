#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 */

void _puts(char *str)
{
        int i;
	int lenStr;

	lenStr = _strlen(str);
	
        for (i = lenStr; i != 0; i--)
        {
                _putchar(str[i]);
        }
        _putchar('\n');
}


