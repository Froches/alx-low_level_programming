#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: a pointer to the head of the lists
 *
 * Return: The no. elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
