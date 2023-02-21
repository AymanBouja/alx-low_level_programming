#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
