#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Returns: nothing
 */

void times_table(void)
{
	int digit, mult, result;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		
	for (mult = 1; mult <= 9 ; mult++)
	{
		result = digit * mult;
	if ((result / 10) > 0)
	{
		_putchar((result / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
	_putchar((result % 10) + '0');
	if (mult < 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
	_putchar('\n');
	}
}

