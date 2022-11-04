#include <stdio.h>

/**
 *main - prints the number of arguments passed into it
 *@argc: counts the arguments
 *@argv: array of the arguments
 *Return: 0
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
