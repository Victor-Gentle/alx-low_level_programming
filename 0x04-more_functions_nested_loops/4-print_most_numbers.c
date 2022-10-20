#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Do not print 2 and 4
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
