#include "main.h"
/**
 * _isdigit - check if is number
 * @c: input to check
 * Return: 1 if true otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
