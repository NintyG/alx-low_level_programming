#include <stdio.h>
#include <ctype.h>

/**
 * print_name - Prints a name using a function pointer
 *
 * @name: Name to print
 * @f: Function pointer to print method
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

/**
 * print_normal - Prints a name normally
 *
 * @name: Name to print
 */
void print_normal(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_uppercase - Prints a name in uppercase
 *
 * @name: Name to print
 */
void print_uppercase(char *name)
{
	while (*name)
		putchar(toupper(*name++));

	putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char name[100] = "Grace Gyang";

	print_name(name, print_normal);
	print_name(name, print_uppercase);

	return (0);
}
