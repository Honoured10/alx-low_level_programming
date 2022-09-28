#include "main.h"
/**
 * _strlen_recursion -prints the length of a string.
 * @s: string to print
 * Returns: lenght of the string.
 */

int _strlen_recursion(char *s);
{
if (*s == '\o')
return (0);
s++;
else
return (1 + _strlen_recursion(s + 1));
}
