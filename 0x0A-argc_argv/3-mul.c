#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @agrc: number of arguments
 * @agrc: array f arguments
 * Return: 0
 */

int main(int argc, char *agrv[])
{
	int i, j, mult;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(agrv[1]);
	j = atoi(agrv[2]);
	mult = i * j;

	printf("%d\n", mult);
	return (0);
}
