#include <stdio.h>
#include "main.h"

void print_string(char *str);

/**
 *main - prints its name, followed by a new line
 *@argc: counts arguments
 *@argv: array of arguments
 *Return: 0
 */

int main(int _attribute_((_unused_)) argc, char *argv[])
{
	print_string(argv[0]);
	_putchar('\n');

	return (0);
}

/**
 * print_string - prints ll char of a string
 * @str: Pointer to string
 * Return: void
 */

void print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
