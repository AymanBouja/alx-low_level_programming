#include<stdio.h>
/**
 * main - function
 *
 * Description: this program prints the types
 *
 * Return: this function returns 0
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a long float: %d byte(s)", sizeof(long float));
	return (0);
}
