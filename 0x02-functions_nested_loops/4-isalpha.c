#include "main.h"
/**
 * _isalpha - function
 *
 * @c: character
 *
 * Description: 'c' is the parameter of the character
 *
 * Return: 1 when is alpha 0 when no
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	return (1);
	else
	return (0);
}
