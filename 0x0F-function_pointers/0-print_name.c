#include "function_pointers.h"

/**
 * print_name - this functions prints a name
 * @name: strng to print
 * @f: function pointer, that receives a string
 * Description: this function prints a name
 * section header: header of this function is function_pointers.h)*
 *Return: void
 */
 
 void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
