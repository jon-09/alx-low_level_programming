#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: linked list head
 * @str: string to be storeed in the lk - list
 * Return: address of the new elemt
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *Nnod,  *tmp;
	size_t chr;

	Nnod = malloc(sizeof(list_t));
	if (Nnod == NULL)
		return (NULL);

	Nnod->str = strdup(str);

	chr = 0;
	while (str[chr])
	{
		Nnod->len = chr;
		Nnod->next = NULL;
		tmp = *head;
		chr++;
	}
	if (tmp == NULL)
		*head = Nnod;

	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = Nnod;
	}
	return (*head);
}
