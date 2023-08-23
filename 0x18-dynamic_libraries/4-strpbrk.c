#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first occurrence in the string
 *
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int y;
		while (*s)
		{
			for (y = 0; accept[y]; y++)
			{
				if (*s == accept[y])
					return (s);
			}
			s++;
		}
	return (NULL);
}
