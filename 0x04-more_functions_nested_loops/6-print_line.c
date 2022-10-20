#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: Always 0
 */

void print_line(int n)
{
int i;

if (n <= 0)
{
putchar('\n');
}
if (n > 0)
{
for (i = 0; i <= n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
