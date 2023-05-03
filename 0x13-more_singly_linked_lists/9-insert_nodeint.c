#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer to the head node
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (!head)
		return (NULL);

	if (idx == 0)
		return (add_nodeint_end(head, n));

	current_node = *head;
	for (i = 0; i < idx - 1 && current_node; i++)
		current_node = current_node->next;

	if (!current_node)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
