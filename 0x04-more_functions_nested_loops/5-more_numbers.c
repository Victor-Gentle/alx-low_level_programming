#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 * Return: Always 0
 */

void more_numbers(void)
{
int a = 0;
int b;

while (a++ < 10)
{
for (b = '0'; b <= '14'; b++)
{
_putchar(b);
}
}
_putchar('\n');
}
