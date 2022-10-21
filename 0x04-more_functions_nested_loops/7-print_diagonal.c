#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 * Return: Void
 */

void print_diagonal(int n)
{
	int i, spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
