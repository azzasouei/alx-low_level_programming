#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the string name
 * @f: the printing function poniter
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
