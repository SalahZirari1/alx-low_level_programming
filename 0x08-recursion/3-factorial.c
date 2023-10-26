#include "main.h"

/**
 * factorial - returns fact
 * @n:number
 *
 * Return: factoral
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
