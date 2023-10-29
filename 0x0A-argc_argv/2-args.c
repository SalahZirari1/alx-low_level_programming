#include "main.h"
#include <stdio.h>

/**
 * main - prints things
 * @argc:argc
 * @argv: argv
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	
	if ( argc > 1)
	{
		for (i = 0; i < argc; i++)

		{

			if (i != 1)
				putchar('\n');
	
			printf("%s",argv[i]);

		}
		putchar('\n');
	}

	return (0);
}
