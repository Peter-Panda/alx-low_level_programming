#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: number to check
 * Return: 1 if positive and 0 if it's null otherwise -1
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
	_putchar('-');
	return (-1);
}
