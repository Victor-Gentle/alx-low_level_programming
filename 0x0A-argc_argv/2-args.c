#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @agrc: number of argments
 * @agrv: array of arguments
 * Return: 0
 */

int main(int agrc, char *agrv[])
{
	int i;

	for (i = 0; i < agrc; i++)
		printf("%s\n", agrv[i]);
	return (0);
}
