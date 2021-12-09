#include "monty.h"
/**
 * free_stack - Free the stack.
 * @stack: The stack.
 */
void free_stack(stack_t **stack)
{

stack_t *node = NULL;

while (*stack)
{
node = *stack;
*stack = (*stack)->next;
free(node);
}

}
