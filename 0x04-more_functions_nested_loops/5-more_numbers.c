#include "main.h"

/**
 * print_numbers -  prints numbers
 *
 * Return: void
 */
void print_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i <= 9; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
	}
	_putchar('\n');
}
