#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: A pointer to the address of the
 *        head of the listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *cnt;

	if (*head == NULL)
		return;

	while (*head)
	{
	cnt = (*head)->next;
	free(*head);
	*head = cnt;
	}
	*head = NULL;
}
