#include "monty.h"
/**
 * _push - push element into the stack
 * @stack: stack given by main
 * @count: amount of lines
 *
 * Return: void
 */
void _push(stack_t **stack, unsigned int count)
{
int n;

if ((is_digit(global.num)) == 1)
{
dprintf(2, "L%d: usage: push integer\n", count);
exit(EXIT_FAILURE);
}

n = atoi(global.num);
add_dnodeint(stack, n);
}
