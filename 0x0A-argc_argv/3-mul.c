#include <stdio.h>
#include <stdlib.h>

/**
 * main - two numbers multiplication.
 * @argc: counts arguments
 * @argv: argumentative integer
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int y, z;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	y = atoi(argv[1]);
	z = atoi(argv[2]);
	printf("%d\n", y * z);

	return (0);
}
