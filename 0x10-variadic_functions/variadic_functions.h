#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg. h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_strct - format-type class
 * @format: format identifier
 * @fmt_print_func: pointer to function that prints in the format of @format
 */

struct format_struct
{
	char format;
	void (*fmt_print_func)(va_list *arg_list);
};

typedef struct format_struct format_struct_ptr;

#endif

