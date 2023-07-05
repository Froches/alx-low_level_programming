#include "lists.h"

/**
 * print_listint - function that prints the elements of a list
 * @h: pointer to head of the list
 * Return: Number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
