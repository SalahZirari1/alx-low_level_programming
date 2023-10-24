#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - calculates sum of diagonlas
 * @a: matrix
 * @size:size of array
 *
 */

void print_diagsums(int *a, int size)
{
	int i, total1, total2;
	
	total1 = 0;
	total2 = 0;

	for (i = 0; i < size; i++)
	{
		total1 +=a[i * size + i];
		total2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d", total1, total2);
}
