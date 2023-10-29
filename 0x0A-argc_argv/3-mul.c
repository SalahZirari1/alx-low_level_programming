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
		return (1);
	
	printf("%d\n", argv[1] * argv[2]);

	return (0);
}
