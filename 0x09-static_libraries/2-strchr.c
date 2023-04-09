#include "main.h"
#include <stddef.h>
/**
 * _strchr - find character in a string
 * @s: pointer to char
 * @c: char params to found
 *
 * Return: *S
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (0);
}
