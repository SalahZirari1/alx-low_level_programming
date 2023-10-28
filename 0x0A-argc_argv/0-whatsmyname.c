#include "main.h"

/**
 * proggy - a program
 * @argc:argc
 * @argv:argv
 *
 * Return : 0
 */

int proggy(int argc, char* argv[])
{
	if (argc > 0)
	{

		char* name;

		name = argv[0];
		while ( *name != '\0')
		{
			_putchar(*name);
			name++;
		}
		_putchar('\n');
	}

	return (0);
}
