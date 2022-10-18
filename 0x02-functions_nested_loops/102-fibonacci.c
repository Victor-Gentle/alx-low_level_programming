#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 Success
 */

int main(void)
{
	int inc;
	unsigned long n1 = 0, n2 = 1, n3;

	for (inc = 0; inc < 50; inc++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
	}
	n1 = n2;
	n2 = n3;
	if (inc == 49)
		printf("\n");
	else
		printf(", ");
	return (0);
}

