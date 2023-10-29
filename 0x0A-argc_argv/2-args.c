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

	for (i = 0; i < argc; i++)
	{
		char *name;

		name = argv[i + 1];

		while ( *name != '\0')
		{
			_putchar(*name);
		}
		_putchar('\n');
	}
	
	return (0);
}
