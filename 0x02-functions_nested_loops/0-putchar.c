#include "main.h"

/**
 * main - program that prints _putchar followed by \n
 *
 * Return: Always 0
 */

int main(void)
{
	char school[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(school[c]);
	}
	_putchar('\n');
	return (0);
}


