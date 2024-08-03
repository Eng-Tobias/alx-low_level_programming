#include "lists.h"
#include <stdlib.h>

/**
* free_list - Frees a list_t list.
* @head: Pointer to the head of the list to be freed.
*/
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;   /* Store the next node */
free(head->str);     /* Free the string in the current node */
free(head);          /* Free the current node */
head = temp;         /* Move to the next node */
}
}
