#ifndef MONTY_H
#define MONTY_H

#define DELIM " \t\r\n"

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <limits.h>




/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_s - opcode and its function
 * @num: the opcode
 * @headstack: function to handle the opcode
 * @count:each line count
 * @file:file
 * @gbuff: buffer
 */
typedef struct global_s
{
char *num;
char *gbuff;
stack_t **headstack;
unsigned int count;
File *file;
} global_t

extern global_t global;
typedef void (*instruct_func)(stack_t **stack, unsigned int count);
stack_t *add_dnodeint(stack_t **head, const int n);
stack_t *add_dnodeint_end(stack_t **head, const int n);
int delete_node_index(stack_t **head, unsigned int index);
void free_stack_t(stack_t **head);
void error_fun(stack_t **headstack);
void free_list(stack_t *head);
void get_func(char *op);
void openfile(char *filename);
int is_digit(char *str);
void _push(stack_t **stack, unsigned int count);
void _pall(stack_t **stack, unsigned int count);
void _pint(stack_t **stack, unsigned int count);
void _pop(stack_t **stack, unsigned int count);
void _add(stack_t **stack, unsigned int count);
void _sub(stack_t **stack, unsigned int count);
void _mul(stack_t **stack, unsigned int count);
void _div(stack_t **stack, unsigned int count);
void exit_op(void);

#endif
