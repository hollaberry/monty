#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * _isascii - check if ascii is true
 * @c: int to check
 * Return: 0 if fails or number if true
 */
int _isascii(int c)
{
return ((c <= 127) && (c >= 0));
}
/**
 * pchar - prints the int at the top of the stack as char
 * @stack: stack given by main
 * @line_cnt: ammount of lines
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_cnt)
{
if (!stack || !(*stack))
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_cnt);
status = EXIT_FAILURE;
return;
}
if (_isascii((*stack)->n) == 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_cnt);
status = EXIT_FAILURE;
return;
}
printf("%c\n", (*stack)->n);
}
