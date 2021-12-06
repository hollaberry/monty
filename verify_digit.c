#include <ctype.h>
#include "monty.h"

/**
 * is_digit - checks if a string is a digit
 * @str: string to be check
 *
 * Return: 1 if success, 0 if not
 */
int is_digit(char *str)
{
int i;
if (!str)
return (1);
if (*str == '-')
str++;

for (i = 0 ; str[i]; i++)
if (str[i] < 48 || s[i] > 57)
return (1);

return (0);
}
