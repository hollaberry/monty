#include "monty.h"
/**
 * op_pint - Print value top.
 * @stack: The stack.
 * @line_number: line number.
*/
void op_pint(stack_t **stack, unsigned int line_number)
{

int dta = 0;

if (!stack || !*stack)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
dta = (*stack)->n;
printf("%d\n", dta);

}

/**
 * op_pop - Remove the element.
 * @stack: The stack.
 * @line_number: line number.
*/
void op_pop(stack_t **stack, unsigned int line_number)
{

stack_t *next;

if (!stack || !*stack)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
next = (*stack)->next;
free(*stack);
*stack = next;

}

/**
 * op_push - Push the new to the stack.
 * @stack: The stack.
 * @line_number: line number.
 * @vstack: Value stack.
*/
void op_push(stack_t **stack, unsigned int line_number, char *vstack)
{

stack_t *node = NULL;
int i;

if (vstack == NULL)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
for (i = 0; vstack[i]; i++)
{
if (vstack[0] == '-' && i == 0)
continue;
if (isdigit(vstack[i]) == 0)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
}
/*Node*/
node = malloc(sizeof(stack));
if (node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
node->n = atoi(vstack);
node->next = NULL;
node->prev = NULL;
if (*stack)
{
node->next = *stack;
(*stack)->prev = node;
}

*stack = node;
}


/**
 * op_sub - Subtracts the top element of the stack.
 * @stack: The stack.
 * @line_number: line number.
*/
void op_sub(stack_t **stack, unsigned int line_number)
{

stack_t *node = NULL;

if (*stack && (*stack)->next != NULL)
{
(*stack)->next->n -= (*stack)->n;
node = *stack;
*stack = (*stack)->next;
(*stack)->prev = NULL;
free(node);
}
else
{
fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
free_stack(stack);
exit(EXIT_FAILURE);
}
}
