#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that create an array of chars.
 * @size: array size
 * @c: initial value
 *
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int h;

	if (size == 0)
		return (Null);

	array = (char) malloc(sizeof(char) size);
	if (array == Null)
		return (Null);
	for (h = 0; h < size; h++)
	array[h] = c;

	return (array);
}
