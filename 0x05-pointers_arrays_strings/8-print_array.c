#include <stdio.h>
#include "main.h"
i
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: first integer
 * @n: second integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc + 1 != n)
			printf(", ");
		else
			printf("%d", a[inc]);
	}
	printf("\n");
}
