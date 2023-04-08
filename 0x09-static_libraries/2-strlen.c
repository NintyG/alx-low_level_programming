#include "main.h"
/**
 * _strlen - search  the length of a string
 * @s: char to search
 * Desc: to return the length of a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
