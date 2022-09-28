#include "main.h"
/**
 * main -Entry point
 * void _puts_recursion(char *s); prints a string, followed by a new line.
 * Return: 0 (Success)
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
