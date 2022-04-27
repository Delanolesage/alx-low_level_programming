#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - add a node at the end of a linked list
 * @head: The character to print
 * @n: string for the new node
 *
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *nptr, *temp;

	nptr  = malloc(sizeof(listint_t));
	if (nptr == NULL)
		return (NULL);



	nptr->n = n;
	nptr->next = NULL;

	if (*head == NULL)
		*head = nptr;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nptr;
	}
	return (*head);
}
