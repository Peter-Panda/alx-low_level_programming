#include "main.h"

/**
 * _strlen - return len of string
 * @s: string to count
 * Return: len of s
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;

	return (n);
}
