#include "main.h"

/**
 * proggy - a program
 */

void proggy(int argc, char* argv[])
{
	int i;
	char* name;

	name = argv[0];

	while ( *name != '\0')
	{
		_putchar(*name);
		name++;
	}
}
