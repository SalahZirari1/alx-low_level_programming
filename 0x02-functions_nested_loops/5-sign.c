#include "main.h"
#include "stdio.h"

/**
 * print-sign - s
 * @n: n
 *
 * Return:
 * 1: if pos
 * 0: if zero
 * -1: if neg
 */

int print_sign(int n)
{
	if ( n > 0 )
	{
		printf("+");
		return (1);
	}
	if ( n < 0)
	{
		printf("-");
		return (-1);
	}

	printf("0");
	return (0);
}
