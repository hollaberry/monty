#include "monty.h"
/**
 *pop - removes the top element of the stack
 * @stack: pointer to stack
 * @count: current line_number
 */
void pop(stack_t **stack, unsigned int count)
{
stack_t *tmp = NULL;

if (!stack || !(*stack))
{
fprintf(stderr, "L%d: can't pop an empty stack\n", count);
status = EXIT_FAILURE;
return;
}
tmp = (*stack)->next;
free(*stack);
*stack = tmp;
if (!*stack)
return; /* prevents errors cause next line might assign a NULL */
(*stack)->prev = NULL;
}
