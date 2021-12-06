#include "monty.h"
/**
 *add_dnodeint - add a new node
 *@head:head of the current list
 *@n: value new node list
 *Return: address of new element
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
stack_t *newnode;

if (head == NULL)
return (NULL);
newnode = malloc(sizeof(stack_t));
if (newnode == NULL)
return (NULL);

newnode->n = n;

if (*head == NULL)
{
newnode->next = NULL;
newnode->prev = NULL;
}
else
{
newnode->next = *head;
newnode->prev = NULL;
(*head)->prev = newnode;
}
*head = newnode;
return (newnode);
}


/**
 *add_dnodeint_end - add new node at the end of a linked list
 *@head: the head of the list
 *@n: value to be added
 *Return: new node at the end
 */
stack_t *add_dnodeint_end(stack_t **head, const int n)
{
stack_t *newnode;
stack_t *tmp;

newnode = malloc(sizeof(stack_t));
if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
newnode->prev = NULL;
*head = newnnode;
}
else
{
tmp = *head;
while(tmp->next != NULL)
tmp = tmp->next;

newnode->prev = tmp;
tmp->next = newnode;
}
return (newnode);


/**
 * delete_node_index - delete a node at a given index
 * @head: pointer to head of doubly linked list
 * @index: index to remove node
 * Return: 1 for success, -1 for failure
 */

 int delete_node_index(stack_t **head, unsigned int index)
 {
   stack_t *headcounter = *head;
   stack_t *tmp1 = *head, *tmp2, *tmp3;
   unsigned int count = 0;

   if (!head || !(*head))
     return (-1)

       while (headcounter)
	 headcounter = headcounter->next, count++;
   if (index > (count - 1))
     return (-1);
   if (index == 0)
     {
       tmp1 = tmp1->next;
       free(*head);
       *head = tmp1;
       if (*head)
	 (*head)->prev = NULL;
       return (1);
     }
   for (count = 0; count < index; count++)
     tmp2 = tmp1, tmp1 = tmp1->next;

   tmp2->next = tmp1->next;
   tmp3 = tmp1->next;

   if (tmp3)
     tmp3->prev = tmp2;
   free(tmp1);
   return (1);
 }

 /**
  * free_stack_t - function that frees a stck_t list
  * @head: head of doubly linked list
  */
void free_stack(stack_t **head)
{
stack_t *tmp;
while (head)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
}
