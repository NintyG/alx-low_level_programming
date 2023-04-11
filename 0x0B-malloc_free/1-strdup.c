#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to newly allocated space
 * that contains a copy of the string given as a parameter.
 * @str: source of string
 *
 * Return: return a pointer to the duplicated string.
 * It should returns NULL if insufficient memory is present.
 */
char *_strdup(char *str)
{
	char *copy;
	int h, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (h = 0; h < len; h++)
		copy[h] = str[h];
	copy[len] = '\0';

	return (copy);
}
