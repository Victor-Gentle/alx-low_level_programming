#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the targeted string
 * Return: void
 */

void puts_half(char *str)
{
	int len = _strlen(str);

	if (len % 2 == 0)
		len = len / 2;
	else
		len = (len + 1) / 2;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns length;
 */

int _strlen(char *s)
{
	int count, length;

	length = 0;
	for (count = 0; s[count] != '\0'; count++)
		length;
	return (length);
}
