#include "main.h"
/**
 * _islower - function
 *
 * @c: character 
 *
 * Description: 'c' is the parameter of the character
 *
 * Return: 1 when is lower 0 when no
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
