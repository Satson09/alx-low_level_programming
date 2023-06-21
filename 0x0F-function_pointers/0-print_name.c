#include <stdio.h>:
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name : name to print
 * @f : pointer to print function
 * Return : void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
