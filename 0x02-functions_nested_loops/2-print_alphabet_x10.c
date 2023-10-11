#include "main.h"

/*
 *
 * print_alphabet_x10 - entry
 *
 * Return : void
 */


void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j=0 ; j < 11; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		
	_putchar('\n');
	}
	
}
