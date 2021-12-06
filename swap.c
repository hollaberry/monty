#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @stack: Pointer to head of stack (or queue)
 * @count: current line number
 */
void _swap(stack_t **stack, unsigned int count)
{
stack_t *temp = *stack, *temp2, *temp3;
int cnt = 0;

while (temp)
temp = temp->next, cnt++;

if (cnt < 2 || !stack || !(*stack) || !(*stack)->next)
{
dprintf(2, "L%d: can't swap, stack too short\n", count);
exit_op();
exit(EXIT_FAILURE);
}
temp = temp3 = *stack;
temp2 = temp->next;

temp->next = temp2->next, temp->prev = temp2;
temp2->next = temp3, temp2->prev = temp3->prev;

*stack = temp2;
}
