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
	
		for (i = 0; i < argc; i++)

		{

			printf("%s",argv[i]);

		}
	return (0);
}
