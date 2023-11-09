#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - pritns anyting
 * @char: charachter
 * @format: format
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char*);
				if ( s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		if ((format[i + 1]) && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
				i++;
	}

	va_end(args);

	printf("\n");
}
