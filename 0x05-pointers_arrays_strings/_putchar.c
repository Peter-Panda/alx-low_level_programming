#include "main.h"

/**
 * _putchar - print char
 * @c: char input
 * Return: 1 on Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
