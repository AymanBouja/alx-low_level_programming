#include "main.h"

/**
 * _strcat - function
 *
 * @dest: destination char
 * @src: source char
 *
 * Return: the updated string
 */
char *_strcat(char *dest, char *src)
{
	char *c1, *c2;
	int length = 0;

	for (c1 = dest; *c1 != '\0'; c1++)
	{
		length++;
	}
	for (c1 = dest + length, c2 = src; *c2 != '\0'; c2++, c1++)
	{
		*c1 = *c2;
	}
	*c1 = '\0';

	return (c1);
}
