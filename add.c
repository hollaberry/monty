#include "monty.h"
/**
 * _add - adds the top two elements of the stack
 * @stack: pointer to head stack (or queue)
 * @count: current line number
 */
void _add(stack_t **stack, unsigned int count)
{
stack_t *temp = *stack;
int cnt = 0, tmpn;

while (temp)
temp = temp->next, cnt++;

if (cnt < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", count);
exit_op();
exit(EXIT_FAILURE);
}

tmpn = (*stack)->n;
delete_node_index(stack, 0);
(*stack)->n += tmpn;
}
