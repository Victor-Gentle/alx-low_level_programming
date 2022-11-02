#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: targeted integer
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: integeer 1
 * @i: integer 2
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}
