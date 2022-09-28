/**
 * factorial - returns the factorial of the number
 * @n: the max factorial
 * Return: factorial of number n
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if
(n == 0)
return (1);
else
return (n * factorial(n - 1));
}
