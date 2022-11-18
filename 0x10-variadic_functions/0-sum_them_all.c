#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: total number of parameters
 * Return: sum of value parameters
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list arguments;

va_start(arguments, n);

if (n != 0)
for (i = 0; i < n; i++)
{
sum += va_arg(arguments, int);
}
va_end(arguments);
return (sum);
}
