#include "main.h"
/**
 * _isalpha - check if input is a char
 * @c: input to check
 * Return: 1 if is alpha and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
