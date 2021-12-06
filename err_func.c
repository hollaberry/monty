#include "monty.h"
/**
 * error_fun - exit and free stack
 * @stack: stack pointer
 *
 */
void error_fun(stack_t **stack)
{
if (*stack)
free_list(*stack);

exit(EXIT_FAILURE);
}

/**
 * free_list - free memory of the linked list
 * @head: first node of linked list
 *
 *
 */
void free_list(stack_t *head)
{
stack_t *tmp;

while (head != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}
}  

/**
 * openfile - read file
 * @filename: output
 * Return:Nothing
 */
void openfile(char *filename)
{
char *buff = NULL;
char *ptr = NULL;
unsigned int count = 0;
size_t buff_long;
FILE *file = fopen(filename, "r");

if (!file)
{
dprintf(2, "Error: Can't open file %s\n", filename);
exit(EXIT_FAILURE);
}
else
{
global.file = file;
while ((getline(&buff, &buff_long, file)) != -1)
{
count++;
global.count = count;
ptr = strtok(buff, DELIM);
global.num = strtok(NULL, DELIM);
get_func(ptr);
}
free(buff);
fclose(file);
exit(EXIT_SUCCESS);
}
}
