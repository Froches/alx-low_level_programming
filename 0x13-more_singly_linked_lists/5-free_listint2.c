#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 *
 * @head: pointer to the head node of the linked list.
 *
 * Description: The function frees a linked list of listint_t nodes, and
 * sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
