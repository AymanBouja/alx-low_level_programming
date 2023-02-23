#include "main.h"

/**
 * print_line -  prints /
 *
 * @n: number of /
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('/');
		}
		_putchar('\n');
	}
}
