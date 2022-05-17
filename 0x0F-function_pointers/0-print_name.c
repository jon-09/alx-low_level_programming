#include "function_pointers.h"
/**
 * print_name - function prints the name passed
 * @name: character input
 * @f: point to function the function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
