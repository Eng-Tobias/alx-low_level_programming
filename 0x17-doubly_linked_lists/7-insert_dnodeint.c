#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the doubly linked list
 * @idx: Index at which to insert the new node (starts at 0)
 * @n: Value to store in the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

    if (idx == 0)
        return (add_dnodeint(h, n));  /* Insert at the beginning */
    
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    while (temp && i < idx - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL || (temp->next == NULL && i + 1 != idx))
    {
        free(new_node);
        return (NULL);  /* Index out of range */
    }

    new_node->next = temp->next;  /* Inserting in between or at the end */
    new_node->prev = temp;

    if (temp->next)
        temp->next->prev = new_node;

    temp->next = new_node;

    return (new_node);
}
