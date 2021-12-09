#include "monty.h"
/**
 * main - Principal funtion.
 * @argc: The numbers line command.
 * @argv: The command line arguments.
 * Return: 0 success and 1 otherwise.
*/
int main(int argc, char **argv)
{

FILE *op_file;
char *buff = NULL;
stack_t *stack = NULL;
size_t len = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
op_file = fopen(argv[1], "r");
if (!(op_file))
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
else
takecodes(stack, buff, len, op_file);
return (EXIT_SUCCESS);

}
