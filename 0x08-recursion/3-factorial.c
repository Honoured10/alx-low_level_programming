#include "main.h"
/**
 * int factorial -finds the factorial of a number.
 * @s: number to factorize
 * Returns: factorial of number n
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
