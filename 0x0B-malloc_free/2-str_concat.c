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
	int i, len1, len2;
	
	i = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	
	while (s2[len2] != '\0')
		len2++;
	

	str = (char *)malloc(len1 + len2 + 1);
	
	if (str == NULL)
		return (NULL);
	
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		s1++;
		i++;
	}
	i = 0;

	while (s2[i] != '\0')
	{
		str[i] = s2[i];
		s2++;
		i++;
	}

	str[i] = '\0';

	return (str);
             

}
