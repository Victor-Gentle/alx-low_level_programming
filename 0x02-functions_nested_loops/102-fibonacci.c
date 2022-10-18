#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 Success
 */

int main(void)
{
	int inc;
	long n1 = 1, n2 = 2, n3;

	for (inc = 0; inc < 50; inc++)
	{
	if (inc == 49)
		printf("%lu", n1);
	else
		printf("%lu, ", n1);
	n3 = n1 + n2;
	n1 = n2;
	n2 = n3;
	}
	printf("\n")
	return (0);
}

