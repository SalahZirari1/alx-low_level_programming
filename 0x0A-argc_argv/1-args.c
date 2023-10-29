#include "main.h"

/**
 * main - prints things
 * @argc: argc
 * @argv:  argv
 *
 * Return: sucess
 */

int main(int argc, char *argv[])
{
	(void)argv;

	_putchar(48 + argc - 1);

	_putchar('\n');
	return (0);
}
