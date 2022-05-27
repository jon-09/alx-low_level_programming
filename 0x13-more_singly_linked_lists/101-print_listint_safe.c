#include "lists.h"
/**
 *
 *
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
