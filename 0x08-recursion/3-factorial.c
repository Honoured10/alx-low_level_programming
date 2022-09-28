#include "main.h"
/**
 * int factorial -calculates the factorial of a given number.
 * @s: number to factorize
 * Returns: the factorial of a given number.
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if
(n == 0)
return (1);
else
return (n* factorial(n-1));
}
