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

	for (i = 1; i < argc; i++)
	{
		if (i != 1)
			_putchar('\n');

		char *name;

		name = argv[i];

		while ( *name != '\0')
		{
			_putchar(*name);
			name++;
		}
	}
	
	return (0);
}
