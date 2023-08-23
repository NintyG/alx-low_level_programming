#include "main.h"

/**
 * _memcpy - copies @n bytes from the memory area pointed to by @src to the
 * memory area pointed to by @dest.
 *
 * @dest: Pointer to the memory area where the content is to be copied.
 * @src: Pointer to the memory area where the content is copied from.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to the destination memory area, @dest.
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
