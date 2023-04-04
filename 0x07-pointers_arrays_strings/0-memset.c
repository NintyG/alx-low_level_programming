#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: memory to be filled
 * @b: constant byte to fill memory area
 * @n: number of bytes
 *
 * Return:pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
