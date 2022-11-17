#include "variadic_functions.h"

/**
 * print_strings - prints numbers
 * @separator: pointer to the string to be printed between strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *p;

va_start(valist, n);

for (i = 0; i < n; i++)
{
if (separator != NULL && i != 0)
printf("%s", separator);
p = va_arg(valist, char *);
printf("%s", (p == NULL) ? "(nil)" : p);
}
printf("\n");
va_end(valist);
}
