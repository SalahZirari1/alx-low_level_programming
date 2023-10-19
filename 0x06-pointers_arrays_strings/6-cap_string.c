#include "main.h"

/**
 * cap_string - capitalizes string
 * @str: string
 *
 * Return: capitalized str
 */

char *cap_string(char *str)
{
	int capitalize;
	char *ptr;

	capitalize = 1;
	ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		*ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
		*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}') {
		capitalize = 1;
	}
	else if (capitalize)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		capitalize = 0;
		}
		else if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr += 32;
		}
		ptr++;
	}
	return (str);
}
