#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: integer to start by
 * Return: nothing
 */

void print_to_98(98)
{
	if (n >= 98)
	{
	while (n > 98)
		printf("%d, ", n--);
	printf("%d\n", n);
	}
	else
	{
	while (n < 98)
		printf("%d, ", n++);
	printf("%d\n", n);
	}
}
