# 0x13. More singly linked lists

This project involves creating and manipulating singly linked lists in C. The tasks include printing the elements of a list, adding new nodes, and more.

## Task 0: Print list

Write a function that prints all the elements of a `listint_t` list.

- Prototype: `size_t print_listint(const listint_t *h);`
- Return: the number of nodes
- You are allowed to use `printf`

### Example

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* main - check the code
* 
* Return: Always 0.
*/
int main(void)
{
listint_t *head;
listint_t *new;
listint_t hello = {8, NULL};
size_t n;

head = &hello;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
printf("Error\n");
return (1);
}
new->n = 9;
new->next = head;
head = new;
n = print_listint(head);
printf("-> %lu elements\n", n);
free(new);
return (0);
}
