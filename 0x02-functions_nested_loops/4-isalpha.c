#include "main.h"

/**
 *  _isalpha - checks for alphabetic character
 *  @c: the charcter to be checked
 *  Return: 1 if c is a letter, lowercase or uppercase
 *  Othwerwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90 || (c >= 97 && c <= 122))
		return (1);

	return (0);
}
