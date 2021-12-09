#include "monty.h"
/**
 * op_swap - Swap the top two elements of the stack.
 * @stack: The stack.
 * @line_number: Line number.
*/
void op_swap(stack_t **stack, unsigned int line_number)
{

int dta;

if (*stack && (*stack)->next != NULL)
{
dta = (*stack)->n;
(*stack)->n = (*stack)->next->n;
(*stack)->next->n = dta;
}
else
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
free_stack(stack);
exit(EXIT_FAILURE);
}
}

/**
 * takecodes - Call the main.c and later exec opcode.
 * @stack: The stack.
 * @buff: The string containing the opcode.
 * @len: size len uffer.
 * @op_file: pointer to file to read from
*/
void takecodes(stack_t *stack, char *buff, size_t len, FILE *op_file)
{

unsigned int line_number = 0;
char *buffer = NULL;
char *vstack = NULL;

while (getline(&buff, &len, op_file) != -1)
{
line_number++;
buffer = strtok(buff, DELIM);
if (buffer == NULL || strncmp(buffer, "#", TRUE) == 0)
continue;
if (strcmp(buffer, "push") == 0)
{
vstack = strtok(NULL, DELIM);
op_push(&stack, line_number, vstack);
}
else
cmpcodes(buffer, &stack, line_number);
}
fclose(op_file);
free_stack(&stack);
free(buff);

}
