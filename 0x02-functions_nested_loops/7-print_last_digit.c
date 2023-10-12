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

	int lastDigit;

	if (n < 0) 
	{
		n = n * -1;
	}

	lastDigit = n % 10;

	_putchar('0' + lastDigit);
	return (lastDigit);
}
