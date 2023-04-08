#include "main.h"

/**
 * _abs - analyze the concrete  value of an integer.
 * @n: The integer to be analyze
 * Return: value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
