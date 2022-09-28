#include "main.h"
/**
 * _pow_recursion - Raise a number to the power of another.
 * @x: base number
 * @y: power of
 * Return: the value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y <= 0)
return (1);
else
return (_pow_recursion(x, y - 1));
}
