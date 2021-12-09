#include "monty.h"
/**
 * pall - function to print the stack contents
 * @stack: output
 * @count: num
 * Return : Nothing
 */

void pall(stack_t **stack, unsigned int count)
{

stack_t *temp = *stack;
(void) count;
while (stack && temp)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
