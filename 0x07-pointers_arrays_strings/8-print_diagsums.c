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
		total1 += a[i];
		total2 += a[size - i - 1];
		a += size;
	}

	printf("%d , ", total1);
	printf("%d\n", total2);

}
