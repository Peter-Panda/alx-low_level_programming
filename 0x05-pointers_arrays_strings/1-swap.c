#include "main.h"

/**
 * swap_int - swap two value using pointer
 * @a: input one
 * @b: input two
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
