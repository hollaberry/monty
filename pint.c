#include "monty.h"
/**
 * _pint - function to print the top value  a stack
 * @stack: stackpointer
 * @count: num of items in stack
 */
void _pint(stack_t **stack, unsigned int count)
{
stack_t *temp = *stack;
if (!stack || !(*stack))
{

fprint(stderr, "L%d: can't pint, stack empty\n", count);
exit_op();
exit(EXIT_FAILURE);
}
printf("%d\n", temp->);
}
