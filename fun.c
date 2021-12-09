#include "monty.h"
/**
 * cmpcodes - Compare the input data by the opcodes structure.
 * @buff: The string containing the opcodes.
 * @stack: The stack.
 * @line_number: The line number.
 * Return: The name funtion and exec.
*/
int cmpcodes(char *buff, stack_t **stack, unsigned int line_number)
{

int i = 0;

instruction_t op_codes[] = {
{"pall", op_pall},
{"pint", op_pint},
{"swap", op_swap},
{"nop", op_nop},
{"sub", op_sub},
{"pop", op_pop},
{"add", op_add},
{NULL, NULL},
};

for (i = 0; op_codes[i].opcode; i++)
{
if (strcmp(buff, op_codes[i].opcode) == 0)
{
(op_codes[i].f)(stack, line_number);
return (EXIT_SUCCESS);
}
}
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, buff);
free_stack(stack);
exit(EXIT_FAILURE);
}
