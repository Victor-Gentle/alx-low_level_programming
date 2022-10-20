#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: is the size of the square
 * Return: Always 0
 */

void print_square(int size)
{
int i;
int a;

if (size > 0)
{
for (i = 0; i <= size; size++)
{
for (a = 0; a <= size; a++)
{
_putchar('#');
}
if (i == size - 1)
{
continue;
}
_putchar('\n');
}
}
_putchar('\n');
}
