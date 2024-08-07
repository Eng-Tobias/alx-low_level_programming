#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list,
*                and returns the head node’s data (n).
* @head: Double pointer to the head of the list.
*
* Return: The head node’s data (n), or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
n = temp->n;
*head = (*head)->next;
free(temp);

return (n);
}
