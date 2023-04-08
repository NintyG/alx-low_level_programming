#include "main.h"

/**
 * _memcpy - functions that copy memory areas
 * @dest: The address of the memory to print
 * @src: second value
 * @n: third value
 *
 * Return: char with result of memcpy
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
