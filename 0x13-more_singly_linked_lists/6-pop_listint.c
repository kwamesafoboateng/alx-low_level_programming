#include "lists.h"

/**
 * pop_listint - Deletes the head node and returns its data
 * @head: Pointer to the head node pointer
 *
 * Return: Head node data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *cnt;

	if (*head != NULL) 
	{
	data = (*head)->n;
	cnt = (*head)->next;
	free(*head);
	*head = cnt;
	}

	return (data);
}
