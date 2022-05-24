#include "lists.h"
/**
 * print_list - function prints all the elements
 * @h: linked list
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t itm;

	for (itm = 0; h != NULL; itm++)
	{
		if (h->str == NULL)
			printf("[0] %s", "(nill)");

		else
			printf("[%d] %s", h->len, h->str);

		h = h->next;
	}
	return (itm);
}
