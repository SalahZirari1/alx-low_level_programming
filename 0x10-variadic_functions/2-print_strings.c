#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints a str
 * @separator: spearator
 * @n: n
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	va_end(args);
	printf("\n");
}
