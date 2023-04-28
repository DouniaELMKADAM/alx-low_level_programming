#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a nodes at the end
 * @head: head pointer of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: new head pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int cpt;
	list_t *item, *lastItem;

	item = malloc(sizeof(list_t));
	if (item == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(item);
		return (NULL);
	}

	for (cpt = 0; str[cpt];)
		cpt++;

	item->str = dup;
	item->cpt = cpt;
	item->next = NULL;

	if (*head == NULL)
	*head = item;

	else
	{
		lastItem = *head;
		while (lastItem->next != NULL)
		lastItem = lastItem->next;
		lastItem->next = item;
	}

	return (*head);
}
