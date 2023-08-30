#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *crnt = head;
    list_t *temp;

    while (crnt != NULL) {
        temp = crnt;
        crnt = crnt->next;
        free(temp);
    }
}
