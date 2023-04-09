#include <stdio.h>

/**
 * main - prints all arguments recieived
 * @argc: count arguments
 * @argv: arguments involved
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);

	return (0);
}
