#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: Pointer to head of stack (or queue)
 * @count: current line number
 */
void swap(stack_t **stack, unsigned int count)
{
stack_t *tmp = NULL;
int tmp_n = 0;

if (!stack || !*stack || !((*stack)->next))
{
fprintf(stderr, "L%d: can't swap, stack too short\n", count);
status = EXIT_FAILURE;
return;
}
tmp = *stack;
tmp_n = tmp->n;
tmp->n = tmp_n;

tmp->n = tmp->next->n;
tmp->next->n = tmp_n;

}
