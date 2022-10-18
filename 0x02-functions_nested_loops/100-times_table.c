#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: parameter
 *Return: nothing
 */

void print_times_table(int n)
{
	int digit, mult, result;

	if (n <= 15 && n > 0)
	{
	for (digit = 0; digit <= n; digit++)
	{
		_putchar('0');
	for (mult = 0; mult <= n; mult++)
	{
		_putchar(',');
		_putchar(' ');
		result = digit * mult;
	}
	if (result <= n)
	{
		_putchar(' ');
	}
	else
	{
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
