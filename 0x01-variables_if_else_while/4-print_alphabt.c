#include <stdio.h>


/**
* main - prints number if positive or negative or zero
*
*Return:0
*/

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 113 && i != 101)
			putchar(i);
	}
	putchar('\n');

return (0);
}
