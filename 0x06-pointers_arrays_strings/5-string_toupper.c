#include "main.h"

/**
 * string_toupper - uppercases things
 * @str:str
 *
 * Return: upper str
 */

char *string_toupper(char *str)
{
	char *ptr;

	ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}

	return (str);
}
