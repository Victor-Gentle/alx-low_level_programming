#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @agrc: number of arguments
 * @agrv: array of arguments
 * Return: 0
 */

int main(int agrc, char *agrv[])
{
	int i, j, sum = 0;

	for (i = 0, i < agrc, i++)
	{
		if (argv[i] = '\0')
			printf("0\n");
		for (j = 0, argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(agrv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

