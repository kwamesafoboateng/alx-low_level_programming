#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_cnt;

	node_cnt = malloc(sizeof(listint_t));
	if (!node_cnt)
		return (NULL);

	node_cnt->n = n;
	node_cnt->next = *head;
	*head = node_cnt;
	return (node_cnt);
}
