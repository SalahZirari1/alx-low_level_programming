#include <stdio.h>
/**
 * main - main
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i == 1)
			printf("%d", i);
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d",i);
		}
	}
	return (0);
}
