#include "main.h"

/**
 * _islower - check code
 * @c : ascii value of character
 *
 * Return:
 * - 1 if lowercase
 * - 0 if upper
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}

	return (0);
}
