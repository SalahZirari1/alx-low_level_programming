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
	int i, j, total1, total2;


	for (i = 0; i < size; i++)
	{
		total1 += a[i][i];
	}

	for (j = ; j < size; j++)
	{
		total2 += a[j][size-j];
	}

	printf("%d, %d", total1, total2);
}
