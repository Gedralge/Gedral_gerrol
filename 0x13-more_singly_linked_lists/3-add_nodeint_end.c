#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * of a listint_t list.
 * @head: pointer to pointer of first element of list.
 * @n: element to be added in the list.
 * Return: address of the new element or NULL ifit fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	last = *head;

	if (last == NULL)
		*head = new;
	else
	{
		/* if head is not null, and next is not NULL */
		while (last->next != NULL)
			last = last->next;
		/* go to the last */
		/* place our new at the end */
		last->next = new;
	}

	return (*head);
}

