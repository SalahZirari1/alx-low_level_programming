#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function on param
 * @array: array
 * @size: size
 * @action: func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL || array == NULL)
	       return;	
	for (i = 0; i < size; i++)
	{
		action(array[0]);
	}
}
