#include "lists.h"
/**
 * free_list - function frees a list
 * @head: head node
 * Return: return void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head->str);
	free(head);

}
