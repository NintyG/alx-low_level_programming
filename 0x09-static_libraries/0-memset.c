#include "main.h"

/**
 * _memset - fill a memory with a constant  bytes
 * @s: memory to be filled.
 * @b: constant byte to fill memory area
 * @n: number of bytes filled.
 *
 * Return: pointer to the memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
