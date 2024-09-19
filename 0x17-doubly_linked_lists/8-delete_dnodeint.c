#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    for (i = 0; current != NULL && i < index; i++)
    {
        current = current->next;
    }

    if (current == NULL)
        return (-1);

    if (current->prev)
        current->prev->next = current->next;
    if (current->next)
        current->next->prev = current->prev;
    if (current == *head)
        *head = current->next;

    free(current);
    return (1);
}
