#include <stdlib.h>
#include "lists.h"
/**
*get_nodeint_at_index-Returns the nth node of a listint_t linked list.
*@head: Pointer to the head of the list.
*@index: Index of the node to be returned.
*
*Return: The node at the given index, or NULL if the node does not exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *current = head;
while (current != NULL)
{
if (i == index)
return current;
current = current->next;
i++;
}
return NULL;
}
