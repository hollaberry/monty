#include "monty.h"
/**
 * _pall - function to print the stack contents
 * @stack: output
 * @count: num
 * Return : Nothing
 */

void _pall(stack_t **stack, unsigned int count)
{

stack_t *temp = *stack;
(void) count;
while (stack && temp)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
