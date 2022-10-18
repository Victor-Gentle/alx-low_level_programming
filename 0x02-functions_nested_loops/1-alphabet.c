#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: they are sorted by default
 *Return: Success
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
