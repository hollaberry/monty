#ifndef MONTY_H
#define MONTY_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <errno.h>

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


#define INSTRUCTIONS {\
		{"push", push},\
		{"pall", pall},\
		{"pint", pint},\
		{"pop", pop},\
		{"swap", swap},\
		{"nop", nop},\
		{"div", _div},\
		{"mul", _mul},\
		{"add", _add},\
		{"sub", _sub},\
		{"mod", mod},\
		{"pchar", pchar},\
		{"pstr", pstr},\
		{"rotl", rotl},\
		{"rotr", rotr},\
		{NULL, NULL} \
	}
/**
 * struct help - argument fo rthe current opcode
 * @data_struct: stack mode
 * @argument: The arguments of the string
 *
 */
typedef struct help
{
int data_struct;
char *argument;
} help;
help global;

extern int status;

stack_t *add_node(stack_t **head, const int n);
stack_t *queue_node(stack_t **head, const int n);
void free_stack(stack_t *head);
int is_digit(char *str);
void push(stack_t **stack, unsigned int count);
void pall(stack_t **stack, unsigned int count);
void pint(stack_t **stack, unsigned int count);
void swap(stack_t **stack, unsigned int count);
void pop(stack_t **stack, unsigned int count);
void _add(stack_t **stack, unsigned int count);
void _sub(stack_t **stack, unsigned int count);
void _mul(stack_t **stack, unsigned int count);
void _div(stack_t **stack, unsigned int count);
void nop(stack_t **stack, unsigned int count);
void opcode(stack_t **Stack, char *str, unsigned int line_cnt);
void pchar(stack_t **stack, unsigned int line_cnt);
void pstr(stack_t **stack, unsigned int line_cnt);
void rotr(stack_t **stack, unsigned int line_cnt);
void rotl(stack_t **stack, unsigned int line_count);
void mod(stack_t **stack, unsigned int line_cnt);


ssize_t _getline(char **buf, size_t *bufsiz, FILE *fp);
ssize_t _getdelim(char **buf, size_t *bufsiz, int delimiter, FILE *fp);
int _isascii(int c);
#endif
