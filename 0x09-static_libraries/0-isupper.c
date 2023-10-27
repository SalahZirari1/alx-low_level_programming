#include "main.h"

/**
 * _isupper - main func
 * @c: int
 * Return:
 * -1: if upper
 * -0:else
 */


int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}

	return (0);
}
