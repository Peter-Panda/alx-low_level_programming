#include "main.h"
/**
 * _isupper - check on upper case
 * @c: char to check
 * Return: 1 if true otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
