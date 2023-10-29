#include <stdio.h>

/**
 * main - multimplies
 * @argc: argc
 * @argv: argv
 *
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int n,m;

	if (argc < 3)
	{
		printf("Error");
		return (1);
	}

	n = *argv[1] - 48;
	m = *argv[2] - 48;

	printf("%d %d", n, m);
	/*printf("%d\n", n * m);*/

	return (0);
}
