#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separates things
 * @n: n
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
		return;
	for(i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n-1)
			printf("%s ", separator);
	}

	va_end(args);

	printf("\n");
}
