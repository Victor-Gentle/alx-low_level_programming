#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of the number 612852475143,
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int i;
	long int num = 612852475143;

	for (i = 0; i < num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
		printf("%ld\n", num);
	_putchar('\n');
	}
	return (0);
}
