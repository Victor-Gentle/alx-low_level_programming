#include "function_pointers.h"

/**
<<<<<<< HEAD
 * print_name- this functions prints a name
 * a blank line
 * @name: string to print.
 * @f: this a function pointer, that recieves a string.
 * Description: this function prints a name)?
 * section header: the header of this function is function_pointers.h)
 * Return: this is a void function no return
=======
 * print_name - this functions prints a name
 * @name: strng to print
 * @f: function pointer, that receives a string
 * Description: this function prints a name
 * section header: header of this function is function_pointers.h)*
 *Return: void
>>>>>>> 80543f5db2b9379ab81d7313503cfc1bf5604b0a
 */
 
 void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
