#include "main.h"
/**
 * _islower - check if char is lower case
 * @c: char to check
 * Return: 1 if true and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
