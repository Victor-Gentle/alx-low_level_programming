#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
int i;
int spaces;

if (n <= 0)
{
_putchar('\n');
}
if (n > 0)
{
for (i = 0; i <= n; i++)
{
for (spaces = 0; spaces <= i; spaces++)
{
_putchar(' ');
}
_putchar('\\');
if (i == n - 1)
{
continue;
}
_putchar('\n');
}
_putchar('\n');
}
}
