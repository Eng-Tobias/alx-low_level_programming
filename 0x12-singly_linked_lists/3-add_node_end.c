#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: Pointer to the pointer to the head of the list.
* @str: String to be duplicated and added to the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
unsigned int len = 0;

while (str[len])
len++;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new_node;
}

return (new_node);
}
