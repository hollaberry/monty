#include "monty.h"
/**
 * pint - function to print the top value  a stack
 * @stack: stackpointer
 * @count: num of items in stack
 */
void pint(stack_t **stack, unsigned int count)
{
if (!stack || !(*stack))
{

fprintf(stderr, "L%d: can't pint, stack empty\n", count);
status = EXIT_FAILURE;
return;
}
 printf("%d\n", (*stack)->n);
}
