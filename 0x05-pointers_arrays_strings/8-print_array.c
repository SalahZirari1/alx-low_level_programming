#include "main.h"
#include <stdio.h>

/**
 * print_array - pritns an array
 * @a: array
 * @n:number of elemets to be printed
 */

void print_array(int *a, int n)
{
	int i;


	printf("%d",a[0]);	

	for (i = 1; i < n; i++)
	{
		printf(", %d",a[i]);	
	}
	_putchar("\n");
}
