#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: int 1
 * @b: int 2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;	

}
