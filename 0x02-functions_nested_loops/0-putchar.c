#include "main.h"
/**
 * main - function
 *
 * Return: 0 on success
 */
int main(void)
{
	char * C = "_putchar";
	int i = 0;

	for (i = 0; C[i] != '\0'; i++)
	{
	_putchar(C[i]);
	}
	_putchar('\n');
	return (0);
}
