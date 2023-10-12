#include "main.h"
#include "stdio.h"


/**
 * print_last_digit - entry
 *
 * @n: num
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0) 
	{
		n = n * -1;
	}
	_putchar('0' + (n % 10));
	return (n % 10);
}
