#include "main.h"
#include "string.h"
/*
 * _strchr - function that locates a character in a string
 * @s: first value -char
 * @c: second value - char
 *
 * Return: char with result
 */
char *strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
