#include "main.h"

/**
 * _isalpha - check code
 * @c : ascii value of character
 *
 * Return:
 * - 1 if letter
 * - 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
	{
		return (1);
	}
	return (0);
}
