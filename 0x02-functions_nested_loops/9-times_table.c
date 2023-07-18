#include "main.h"
/**
 * times_table - print times table
 * Return: void
 */
void times_table(void)
{
	int r, c, d;

	for (r = 0; r < 10; r++)
	{
		_putchar('0');
		for (c = 1; c < 10; c++)
		{
			d = r * c;
			if (c != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (d >= 10)
			{
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
			else if (d < 10 && c != 0)
			{
				_putchar(' ');
				_putchar((d % 10) + '0');
			}
			else
				_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
