#include "FUNCTION_POINTERS_H"
#include <stdio.h>

/**
 * print_name - functions that prints a name
 * @name: name to print
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
