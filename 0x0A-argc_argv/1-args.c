#include <stdio.h>

/**
 * main - prints chars of arguments passed.
 * @argc: count arguments
 * @argv: argumentative
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
