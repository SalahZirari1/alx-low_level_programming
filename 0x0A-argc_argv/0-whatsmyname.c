#include "main.h"

/**
 * main - a program
 * @argc:argc
 * @argv:argv
 *
 * Return : always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{

		char *name;

		name = argv[0];
		while (*name != '\0')
		{
			_putchar(*name);
			name++;
		}
		_putchar('\n');
	}

	return (0);
}
