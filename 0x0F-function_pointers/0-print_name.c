#include "function_pointers.h"
/**
 * print_name - function prints the name passed
 * @name: character input
 * @f: point to function f
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
			return;

	f(name);
}
