#include "main.h"
/**
 * puts2 - print string v2
 * @str: string input
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
