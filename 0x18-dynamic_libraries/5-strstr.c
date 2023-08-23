#include "main.h"

/**
* _strstr - locates the first occurrence of a substring
* @haystack: the longer string to search
* @needle: the substring to find
* Return: a pointer to the begi of the substring, or NULL if it is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int x = 0, y = 0;

	while (haystack[x])
	{
		while (needle[y] && (haystack[x] == needle[0]))
		{
			if (haystack[x + y] == needle[y])
				y++;
			else
				break;
		}
		if (needle[y])
		{
			x++;
			y = 0;
		}
		else
			return (haystack + x);
	}
	return (0);
}
