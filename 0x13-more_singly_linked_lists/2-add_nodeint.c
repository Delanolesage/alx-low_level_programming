#include "lists.h"
#include <string.h>

/**
 * add_nodeint - adds anew node at the
 * beginning of a linked list
 * @head: a pointer to the head of the linked list
 * @n: the number to be added to the list
 *
 * Return: the address of the new node, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	new_list = (listint_t *) malloc(sizeof(listint_t));

	if (new_list == NULL)
	{
		free(new_list);
		return (NULL);
	}

	new_list->n = n;

	new_list->next = *head;
	*head = new_list;

	return (new_list);
}
