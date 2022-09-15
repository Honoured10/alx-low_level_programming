#include "main.h"
/**
 * _isupper (int c) - checks for uppercase.
 * @c: character to check.
 * Return: 1 if c is uppercase, 
 * Return 0.otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
