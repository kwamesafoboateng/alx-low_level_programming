#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_cnt = 0;

	while (h != NULL)
	{
	printf("%d", h->n);

	if (h->next != NULL)
	printf("\n");
	h = h->next;
	node_cnt++;
	}
	printf("\n");
	return (node_cnt);
}
