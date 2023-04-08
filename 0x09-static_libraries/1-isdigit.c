#include "main.h"

/**
* _isdigit - function that check for a digit 0 through 9.
* @c: char to digit
* Return:  0 or 1 if is a number
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
