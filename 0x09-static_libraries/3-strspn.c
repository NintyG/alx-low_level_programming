#include "main.h"

/**
 * _strspn - the entry point
 *
 * @s:input the  initial segment of
 *
 * @accept: input string consist only of bytes from
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b, c;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] != 32)
		{
			for (c = 0; accept[c] != '\0'; c++)
			{
				if (s[b] == accept[c])
					a++;
			}
		}
		else
			return (a);
	}
		return (a);

}
