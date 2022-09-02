#include "lists.h"
/**
 *delete_dnodeint_at_index - function that deletes the node
 *		at index of a dlistint_t linked list
 *@head: pointer to head of list
 *@index: index of the item to be deleted
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *temp;
	unsigned int pos;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;
	pos = 0;
	if (index == 0)
	{
		*head = (*head)->next;
	}
	else
	{
		while (pos < (index - 1))
		{
			if (current == NULL)
				return (-1);
			current = current->next;
			pos++;
		}
		temp = current;
		current = current->next;
		temp->next = current == NULL ? NULL : current->next;
	}
	free(current);
	return (1);
}
