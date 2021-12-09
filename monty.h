#ifndef MONTY_H
#define MONTY_H

#define DELIM "\n\t\r "
#define TRUE 1
#define FALSE 0
#define SIZE 1024


#include <string.h>
#include <stdio.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void takecodes(stack_t *node, char *buff, size_t len, FILE *op_file);
void opcodes(stack_t *node, char *buff, size_t len, FILE *op_file);
int cmpcodes(char *buff, stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);
void op_pall(stack_t **stack, unsigned int line_number);
void op_push(stack_t **stack, unsigned int line_number, char *vstack);
void op_pint(stack_t **stack, unsigned int line_number);
void op_swap(stack_t **stack, unsigned int line_number);
void op_nop(stack_t **stack, unsigned int line_number);
void op_sub(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_add(stack_t **stack, unsigned int line_number);

#endif
