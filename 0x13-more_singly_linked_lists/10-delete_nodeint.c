#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL) /* check if the linked list is empty */
		return (-1);

	if (index == 0) /* check if the head node needs to be deleted */
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;
	}

	temp = current->next; /* node to delete */
	current->next = temp->next; /* skip over the node to delete */
	free(temp);
	return (1);
}
