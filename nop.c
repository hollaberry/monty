#include "monty.h"
/**
 * _nop - doesn't do anything
 *@stack: Pointer to head of stack (or queue)
 *@count: Current line number
 */
void _nop(stack_t **stack, unsigned int count)
{
(void) stack;
(void) count;
}

/**
 * _sub - subtracts the top element of the stack from the second
 * top element of the stack
 * @stack: pointer to head of stack (or queue)
 * @count: current line number
 */
void _sub(stack_t **stack, unsigned int count)
{
stack_t *temp = *stack;
int cnt = 0, tmpn;

while (temp)
temp = temp->next, cnt++;

if (cnt < 2)
{
dprintf(2, "L%d: can't sub, stack too short\n", count);
exit_op();
exit(EXIT_FAILURE);
}
tmpn = (*stack)->n;
delete_node_index(stack, 0);
(*stack)->n -= tmpn;
}

/**
 * _div - divides the second top element of the stack by the top
 * element of the stack
 * @stack: pointer to head of stack (or queue)
 * @count: current line number
 */
void _div(stack_t **stack, unsigned int count)
{
stack_t *temp = *stack;
int cnt = 0, tmpn;

while (temp)
temp = temp->next, cnt++;
if (cnt < 2)
{
dprintf(2, "L%d: can't div, stack too short\n", count);
exit_op();
exit(EXIT_FAILURE);
}
tmpn = (*stack)->n;
delete_node_index(stack, 0);

if (tmpn == 0)
{
dprintf(2, "L%d: division by zero\n", count);
exit_op();
exit(EXIT_FAILURE);
}

(*stack)->n /= tmpn;

}


/**
 * _mul - multiplies the second top element of the stack with the top element
 * of the stack
 * @stack: pointer to the head of stack (or queue)
 * @count: current line number
 */

void _mul(stack_t **stack, unsigned int count)
{
stack_t *temp = *stack;
int cnt = 0, tmpn;

while (temp)
temp = temp->next, cnt++;

if (cnt < 2)
{
dprintf(2, "L%d: can't mul, stack too short\n", count);
exit_op();
exit(EXIT_FAILURE);
}
tmpn = (*stack)->n;
delete_node_index(stack, 0);
(*stack)-> *= tmpn;
}
