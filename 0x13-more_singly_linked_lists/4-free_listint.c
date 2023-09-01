#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: A pointer to the head of the listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *cnt;

	while (head != NULL)
	{
		cnt = head;
		head = head->next;
		free(cnt);
	}
}
