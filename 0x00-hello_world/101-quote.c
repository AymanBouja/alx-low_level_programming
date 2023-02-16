#include<stdio.h>
/**
 * main - function
 *
 * Description: print to the standard error
 *
 * Return: returns 1
 */
int main(void)
{
	char *a = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, a);
	return (1);
}
