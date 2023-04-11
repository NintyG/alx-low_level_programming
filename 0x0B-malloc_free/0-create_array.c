#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialize it.
 * @size: the array size
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int h;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (h = 0; h < size; h++)
		array[h] = c;

	return (array);
}
