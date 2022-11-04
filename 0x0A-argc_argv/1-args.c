#include <stdio.h>
#include "main.h"

void print_number(int num);

/**
 *main - prints the number of arguments passed into it
 *@argc: counts the arguments
 *@argv: array of the arguments
 *Return: 0
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	print_number(--argc);
	_putchar('\n');
	return (0);
}

/**
 * print_number - prints number with _putchar
 * @num: number to be printed
 * Return: void
 */

void print_number(int num)
{
	if (num /10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
