#include "lists.h"
#include <string.h>

/**
 * add_node - Adds nodes at the beginning
 * @head: pointer to the head of the list_t list.
 * @str: new string to add to list_t list.
 *
 * Return: return pinter new list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *item;
	char *dup_str;
	int cpt;

	item = malloc(sizeof(list_t));
	if (item == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(item);
		return (NULL);
	}

	for (cpt = 0; str[cpt];)
		cpt++;

	item->str = dup_str;
	item->len = len;
	item->next = *head;

	*head = item;

	return (item);
}
