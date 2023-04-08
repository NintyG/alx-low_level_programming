#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s:first pointer to char
 *
 * @accept: pointer matches to char
 *
 * Return: char pointers
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
