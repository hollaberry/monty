#include "monty.h"
/**
 * queue_node - adds a node to a stack_t in queue node
 * @head: stacck head
 * @n: value to be added
 * Return: Null if meme alloc fails, newly created node otherwisw 
 */
stack_t *queue_node(stack_t **stack, const int n)
{
stack_t *new = malloc(sizeof(stack_t));
stack_t current = *stack;

if (!new)
{
free (new);
return (NULL);
}
new->n = n;

if (!*stack)
{
new->next = NULL;
new->prev = NULL;
*stack = new;
return (new);
}
while (current)
{
if (!current->next)
{
new->next = NULL;
new->prev = current;
current->next = new;
break;
}
current = current->next;
}
return (new);
}




/**
 *add_node - add a new node
 *@head:head of the current list
 *@n: value new node list
 *Return: address of new element
 */
stack_t *add_node(stack_t **head, const int n)
{
stack_t *newnode;
newnode = malloc(sizeof(stack_t));

if(!newnode)
{
fprintf(stderr, "Error: malloc failed\n");
free(newnode);
return (NULL);
}
newnode->n = n;
newnode->next = *head;
newnode->prev = NULL;

if (*head)
(*head)->prev = newnode;

*head = newnode;

return (newnode);
}

  

/**
 * free_stack - function that frees a stck_t list
 * @head: head of doubly linked list
 */
void free_stack(stack_t *head)
{
stack_t *tmp = stack;
stack_t *next;
  
if (stack)
{
next = stack->next;
while (tmp)
{
free(tmp);
tmp = next;
if (next)
next = next->next;
}
}
}

