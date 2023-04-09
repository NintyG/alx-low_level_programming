#include <stdio.h>
#include <stdlib.h>

/**
 * main - programs that adds positive numbers.
 * @argc: identify arguments
 * @argv: arguments involved
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int j, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (j = 1; argv[j]; j++)
	{
		n = strtol(argv[j], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
