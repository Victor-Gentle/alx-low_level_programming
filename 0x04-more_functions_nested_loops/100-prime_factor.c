#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143, 
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	long num = 612852475143;
	int i;

	while (i++ < num / 2)
	{
	if (num % i == 0)
	{
		num /= 2;
		continue;
	}
	for (i = 3; i < num /2; i += 2)
	{
	if (num % i == 0)
	{
		num /= i;
	}
	}
	}
	printf("%ld\n", num);
	return (0);
}
