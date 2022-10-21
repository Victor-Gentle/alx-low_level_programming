#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i;
	int spaces = 0;

	for (i = 0; i < n; i++)
	{
		if (spaces++ < i)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
