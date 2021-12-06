#include "monty.h"
/**
 *_pop - removes the top element of the stack
 * @stack: pointer to stack
 * @count: current line_number
 */
void _pop(stack_t **t, unsigned int count)
{
if (!stack || !(*stack))
{
dprintf(2, "L%d: can't pop an empty stack\n", count);
exit_op();
exit(EXIT_FAILURE);
}
delete_node_index(stack, 0);
}

