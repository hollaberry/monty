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

int result;

if (!stack || !*stack || !((*stack)->next))
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_cnt);
status = EXIT_FAILURE;
return;
}

result = ((*stack)->next->n) - ((*stack)->n);
_pop(stack, line_cnt);/*For top node*/
(*stack)->n = result;
}

/**
 * _div - divides the second top element of the stack by the top
 * element of the stack
 * @stack: pointer to head of stack (or queue)
 * @count: current line number
 */
void _div(stack_t **stack, unsigned int count)
{
int result;

if (!stack || !*stack || !((*stack)->next))
{
fprintf(stderr, "L%d: can't div, stack too short\n", count);
status = EXIT_FAILURE;
return;
}
if (((*stack)->n) == 0)
{
fprintf(stderr, "L%d: division by zero\n", count);
status = EXIT_FAILURE;
return;
}

result = ((*stack)->next->n) / ((*stack)->n);
pop(stack,count);/*For top node*/
(*stack)->n = result;
}

/**
 * _mul - multiplies the second top element of the stack with the top element
 * of the stack
 * @stack: pointer to the head of stack (or queue)
 * @count: current line number
 */

void _mul(stack_t **stack, unsigned int count)
{
int result;


if (!stack || !*stack || !((*stack)->next))
{
fprintf(stderr, "L%d: can't mul, stack too short\n", count);
status = EXIT_FAILURE;
return;
}
result = ((*stack)->next->n) * ((*stack)->n);
pop(stack, line_cnt);/*For top node*/
(*stack)->n = result;
}
