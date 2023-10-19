#include "main.h"

/**
 * leet - encodes str into 1337
 * @str: string
 *
 * Return: 1337 style string
 */

char *leet(char *str)
{
	char *ptr;
	char *ogChars;
	char *reps;

	ogChars = "aAeEoOtTlL";
	reps = "44330771";

	while (*ptr != '\0')
	{
		for (int i = 0; ogChars[i] != '\0'; i++)
		{
			if (*ptr == ogChars[i])
			{
				*ptr == reps[i];
				break;
			}
		}
		ptr++;
	}

	return str;
}
