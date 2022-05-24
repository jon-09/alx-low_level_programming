#include "lists.h"
/**
 * list_len - function returns number of elements
 * @h: the linked list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->next == NULL)
		return (0);
	
	return (list_len(h->next) + 1);
}
