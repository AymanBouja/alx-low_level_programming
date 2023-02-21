#include "main.h"
/**
 * print_sign - function
 *
 * @n: int
 *
 * Description: 'i' is the parameter int
 *
 * Return: 1 when positive 0 when null -1 when negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
