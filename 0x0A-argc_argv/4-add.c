#include <stdio.h>
#include <stdlib.h>

/**
 * main - sop
 * @argc:argc
 * @argb:argv
 *
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i, result;
	result = 0;
	
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *j;

		for(j = argv[i]; *j; j++)
		{
			if (*j < '0' || *j  > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
			
		result += atoi(argv[i]);
	}
	printf("%d", result);
	return (0);
}
