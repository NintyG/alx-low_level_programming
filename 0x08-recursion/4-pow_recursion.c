#include "main.h"

/**
 * _pow_recursion - find a string for any of a set bytes
 * @x: base
 * @y: exposant
 * Return: pointers to the byte in 's' that matches the accepted byte
 * or NULL if no such byte is found.
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
