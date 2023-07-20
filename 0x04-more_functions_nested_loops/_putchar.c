#include "main.h"

/**
 * _putchar - write the char given to stdout
 * @c: char given as an input
 * Return: 1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
