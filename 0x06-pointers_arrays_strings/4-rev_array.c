#include "main.h"

/**
 * reverse_array - reverses an array of ints
 * @a:array
 * @n:elements of array
 *
 */

void reverse_array(int *a, int n)
{
	int start;
	int end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		int temp;

		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}

}
