#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)

{
	int p, q;

	for (p = 0 ; p <= 99 ; p++)
	{
		for (q = 0 ; q <= 99 ; q++)
		{
			if (p < q)
			{
				putchar((p / 10) + 48);
				putchar((p % 10) + 48);
				putchar(' ');
				putchar((q / 10) + 48);
				putchar((q % 10) + 48);
				if (p != 98 || q != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
