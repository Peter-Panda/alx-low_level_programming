#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: number to check
 * Return: last digit
 */
int print_last_digit(int n)
{
	int c;

	c = (n % 10);
	if (c < 0)
		c = (-1 * c);
	_putchar(c + '0');
	return (c);
}
