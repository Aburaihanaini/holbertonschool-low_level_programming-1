#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at index
 * @head: linked list
 * @idx: index of node
 * @n: value of head
 * Return: newly added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *tmp, *new;

	tmp = *head;
	if (head == NULL)
		return (NULL);

	while (tmp != NULL && count != idx - 1)
	{
		tmp = tmp->next;
		count++;
	}

	if (count != idx - 1)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
