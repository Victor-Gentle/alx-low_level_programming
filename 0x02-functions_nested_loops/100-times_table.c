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
		_putchar(48);
	for (mult = 1; mult <= n; mult++)
	{
		 result = digit * mult;
		_putchar(44);
		_putchar(32);
		_putchar(result);
	}
	if (result <= 9)
	{
		_putchar(32);
		_putchar(32);
		_putchar(result + 48);
	}
	else if (result <= 99)
	{
		_putchar(32);
		_putchar((result / 10) + 48);
		_putchar((result / 10) + 48);
	}
	else
	{
		_putchar(((result / 100)  % 10) + 48);
		_putchar(((result / 10)  % 10) + 48);
		 _putchar((result / 100) + 48);
	}

	}
	_putchar('\n');
	}
}
