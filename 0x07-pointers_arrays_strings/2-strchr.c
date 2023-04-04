#include "main.h"

/**
*_strspn - Gets the length of a prefix
* @s: string to be tested
* @accept: string to find
* Return: returns the number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;
	unsigned int c = 0;

	for (x = 0; s[x] != 0; x++)
	{
		if (s[x] == ' ')
			break;
		for (y = 0; accept[y] != 0; y++)
		{
			if (s[x] == accept[y])
				c++;
		}
	}
	return (c);
}
