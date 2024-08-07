#include "lists.h"

/**
* reverse_listint - Reverses a listint_t linked list.
* @head: Double pointer to the head of the list.
*
* Return: Pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;

return (*head);
}
