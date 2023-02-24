#include <stdio.h>

/**
 * print_line -  prints /
 *
 * @n: number of /
 *
 * Return: void
 */

void main()
{
	int i, j,n=5;
	
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar(92);
		putchar('\n');
		}
	}
}
