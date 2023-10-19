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
		if ((*ptr >= 'a' && *ptr <= 'z') && capitalize) 
		{
			*ptr = *ptr - 32; 
			capitalize = 0;
		}
	       	else if ((*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		*ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
		*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')) 
		{
			capitalize = 1;
		}
		else 
		{
			capitalize = 0;
		}
		ptr++;
	}
	return (str);
}
