#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
