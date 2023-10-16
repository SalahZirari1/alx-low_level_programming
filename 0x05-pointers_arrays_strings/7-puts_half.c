#include "main.h"

/**
 * puts_half - prints half 
 * @str: string
 */

void puts_half(char *str)
{
	int length;
	int i;
	int start;

	length = 0;
	while (str[length] != '\0')
	{
		lenghth++
	}
	
	if (length % 2 == 0)
	{
		start = length /2 ;
	}
	else
	{
		start = (length - 1) / 2;
	}

	while (str[start] != '\0')
	{
		putchar(str[i]);
		start++;
	}

	putchar('\n');
}
