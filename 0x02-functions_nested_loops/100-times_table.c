#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: parameter
 *Return: nothing
 */

void print_times_table(int n)
{
	int digit, mult, result;

	if (n <= 15 && n >= 0)
	{
	for (digit = 0; digit <= n; digit++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

	for (mult = 1; mult <= n; mult++)
	{
		result = digit * mult;
	if ((result / 10) > 0)
	{
		_putchar((result / 10) + '0');
		_putchar(' ');
	}
	else
	{
		_putchar(' ');
	}
	_putchar((result % 10) + '0');
	if (mult < n)
	{
		_putchar(',');
		_putchar(' ');

	}
	}
	_putchar(' ');
	_putchar('\n');

	}
	}
}
