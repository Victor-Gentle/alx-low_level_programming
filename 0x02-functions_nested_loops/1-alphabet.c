#include "main.h"

/**
 * void print_alphabet(void) - prints the alphabet in lowercase
 *
 * Description: they are sorted by default
 *Return: Success
 */
void print_alphabet(void)
{
	char letter;

	for (letter = "a"; letter <= "z"; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
