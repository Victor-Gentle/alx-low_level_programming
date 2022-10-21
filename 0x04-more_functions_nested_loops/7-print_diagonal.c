#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 * Return: Void
 */

void print_diagonal(int n)
{
	int i;
	int spaces = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (spaces++ < i)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
