#include "main.h"

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

	if ( argc > 0)
	{

	for (i = 1; i < argc; i++)
	{
		char *name;

		if (i != 1)
			_putchar('\n');

		name = argv[i];

		while ( *name != '\0')
		{
			_putchar(*name);
			name++;
		}
	}
	}
	return (0);
}
