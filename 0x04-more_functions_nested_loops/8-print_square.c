#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: is the size of the square
 * Return: Void
 */

void print_square(int size)
{
int i;
int a;

if (size <= 0)
{
	_putchar('\n');
}
for (i = 0; i < size; size++)
{
for (a = 0; a < size; a++)
{
_putchar('#');
}
_putchar('\n');
}
}
