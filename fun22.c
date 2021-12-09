#include "monty.h"
/**
 * op_add - Add the top two elements.
 * @stack: The stack.
 * @line_number: line number.
*/
void op_add(stack_t **stack, unsigned int line_number)
{

stack_t *node = NULL;

if (*stack && (*stack)->next != NULL)
{
(*stack)->next->n += (*stack)->n;
node = *stack;
*stack = (*stack)->next;
(*stack)->prev = NULL;
free(node);
}
else
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
free_stack(stack);
exit(EXIT_FAILURE);
}
}

/**
 * op_nop - Nathing.
 * @stack: The stack.
 * @line_number: The line number.
*/
void op_nop(stack_t **stack, unsigned int line_number)
{

(void) stack;
(void) line_number;

}


/**
 * op_pall - Print the values the estack.
 * @stack: The stack
 * @line_number: line number
*/
void op_pall(stack_t **stack, unsigned int line_number)
{

stack_t *node = *stack;

(void)line_number;
if (stack == NULL || *stack == NULL)
{
return;
}
while (node != NULL)
{
printf("%d\n", node->n);
node = node->next;
}
}
