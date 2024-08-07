#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* free_listint_safe - Frees a listint_t list safely.
* @h: Pointer to the pointer to the head of the list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current,*temp;
size_t count=0;
listint_t *visited[1024];/* To keep track of visited nodes */
size_t i;
if(h==NULL||*h==NULL)
return (0);
current=*h;
while(current!=NULL)
{
/* Check if current node is already visited */
for(i=0;i<count;i++)
{
if(current==visited[i])
{
/* Found a loop, break the loop and free the remaining nodes */
*h=NULL;
return (count);
}
}
/* Mark the current node as visited */
visited[count++]=current;
temp=current;
current=current->next;
free(temp);
}
*h=NULL;
return (count);
}
