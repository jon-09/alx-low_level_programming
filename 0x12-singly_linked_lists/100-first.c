#include "lists.l"
/**
 * bmain - function runs before main
 * Return: void
 */
void bmain(void) __attribute__((constructor));
/**
 * bmain - function runs before main
 * Return: void
 */
void bmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
