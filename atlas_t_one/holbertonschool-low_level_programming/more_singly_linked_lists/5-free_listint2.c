#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: Pointer to a pointer to the head of the list.
*/

void free_listint2(listint_t **head)
{
    listint_t *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free (temp);
    }
    *head = NULL;
}