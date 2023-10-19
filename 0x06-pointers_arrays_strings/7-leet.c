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
	char *leetChars;
	char *leetReplacements;
	int i;
	int isReplaced;

	ptr = str;
	leetChars = "aAeEoOtTlL";
	leetReplacements = "44330771";

 while (*ptr != '\0') 
 {
        int i = 0;
        while (leetChars[i] != '\0') {
            if (*ptr == leetChars[i]) {
                *ptr = leetReplacements[i];
                break;
            }
            i++;
        }
        ptr++;
    }
	return (str);
}
