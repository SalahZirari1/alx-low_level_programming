#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest:returned string
 * @src:string to concat
 *
 * return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int destLen;
	int j;
	
	destLen = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		destLen++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[destLen + j] = src[j];
	}
	return (dest);
}
