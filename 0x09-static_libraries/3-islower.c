#include "main.h"

/**
 * _islower - Search if a character is in lowercase.
 * @c: character to be search
 *
 * Return: 1 if character is lowercase, 0 for  therwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
