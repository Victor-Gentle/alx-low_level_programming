#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @agrc: counts the arguments
 * @agrv: array of the arguments
 * Return: 0
 */

int main(int argc, char _attribute_((_unused_)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
