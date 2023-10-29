#include <stdio.h>
#include <stdlib.h>
/**
 * main - multimplies
 * @argc: argc
 * @argv: argv
 *
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int n, m, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	result = n * m;

	printf("%d\n", result);

	return (0);
}
