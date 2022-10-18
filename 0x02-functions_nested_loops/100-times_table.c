#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: parameter
 *Return: nothing
 */

void print_times_table(int n)
{
	int digit, mult, result, new;

	if (n <= 15 && n > 0)
	{
	for (digit = 0; digit <= n; digit++)
	{
		_putchar(48);
	for (mult = 1; mult <= n; mult++)
	{
		_putchar(44);
		_putchar(32);

		result = digit * mult;
	}
	if (result <= 9)
	{
		_putchar(32);
		_putchar(32);
	}
	else if (result <= 99 && result >= 10)
	{
		_putchar(32);
		_putchar((result / 10) + 48);
	}
	else
	{
		new = result / 10;
		_putchar((new / 100) + 48);
		_putchar((new % 10) + 48);
	}
	_putchar((result % 10) + 48);
	}
	_putchar('\n');
	}
}
