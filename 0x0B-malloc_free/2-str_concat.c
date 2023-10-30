#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1:str 1
 * @s2:str 2
 *
 * Return: null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = (char *)malloc(sizeof(s1) + sizeof(s2) + 1);
	
	if (str == NULL)
		return (NULL);
	
	while (s1 != '\0')
	{
		str[i] = s1;
		s1++;
		i++;
	}
	i = 0;

	while (s2 != '\0')
	{
		str[i] = s2;
		s2++;
		i++;
	}

	str[i] = '\0';

	return (str);
             

}
