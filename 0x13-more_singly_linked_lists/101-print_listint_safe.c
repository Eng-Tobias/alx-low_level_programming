#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint_safe - Prints a listint_t linked list safely.
* @head: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
const listint_t *visited[1024];
size_t i, count = 0;
int loop_detected = 0;
while (current != NULL)
{
for (i = 0; i < count; i++)
{
if (current == visited[i])
{
printf("-> [%p] %d\n", (void *)current, current->n);
loop_detected = 1;
break;
}
}
if (loop_detected == 0)
{
printf("[%p] %d\n", (void *)current, current->n);
visited[count++] = current;
}
else
{
break;
}
current = current->next;
}
if (loop_detected)
return (count);
return (count);
}
