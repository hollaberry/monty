#include "monty.h"
global_t global;

/**
 * main - handle function for monty language
 * @argc: num of inputs int
 * @argv: code files char
 * Return: nothing
 */

int main(int argc, chat **argv)
{
stack_t *headstack = NULL;
global.headstack = &headstack;


if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
error_fun(&headstack);
exit(EXIT_FAILURE);
}
openfile(argv[1]);
return (0);
}
