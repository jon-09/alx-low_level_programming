#include "lists.h"
/**
 * list_len - function returns number of elements
 * @h: the linked list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t itm;

	itm = 0;
	while (h != NULL)
	{
		h = h->next;
		itm++;
	}
	return (itm);
}
