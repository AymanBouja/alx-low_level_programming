#include "main.h"
/**
 * print_last_digit - function
 *
 * @n: int
 *
 * Description: 'n' is the parameter int
 *
 * Return:the absolute of a number
 */
int print_last_digit(int n)
{
	int a;
	
	if (n < 10)
		n = -n;
	a = n % 10;
	_putchar('0' + a);
	return (a);
}
