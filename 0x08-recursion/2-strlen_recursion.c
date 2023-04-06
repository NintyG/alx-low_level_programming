#include "main.h"

/**
 * _strlen_recursion - returns the lenth of the string
 * @s: select the string
 * Return: int
 */

int _strlen_recursion(char *s)
{

	int n = 0;

	if (*s)
	{
		n +=
_strlen_recursion(s + 1) + 1;
	}
	return (n);

}
