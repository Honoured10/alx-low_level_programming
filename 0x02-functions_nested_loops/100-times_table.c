#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
int s, h, sam;

if (!(n > 15 || n < 0))
{
for (s = 0; s <= n; s++)
{
for (h = 0; h <= n; h++)
{
sam = (s * h);
if (h != 0)
{
_putchar(',');
_putchar(' ');
}
if (sam < 10 && h != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((sam % 10) + '0');
}
else if (sam >= 10 && sam < 100)
{
_putchar(' ');
_putchar((sam / 10) + '0');
_putchar((sam % 10) + '0');
}
else if (sam >= 100 && h != 0)
{
_putchar((sam / 100) + '0');
_putchar((sam / 10) % 10 + '0');
_putchar((sam % 10) + '0');
}
else
_putchar((sam % 10) + '0');
}
_putchar('\n');
}
}
}
