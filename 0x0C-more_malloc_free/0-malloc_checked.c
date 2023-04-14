#include "main.h"

/**
 * malloc_checked - function that cause normal process
 *
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = maloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
