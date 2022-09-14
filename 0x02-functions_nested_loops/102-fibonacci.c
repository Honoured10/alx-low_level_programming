#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
unsigned long count, i, j, k;

s = 0;
h = 1;
for (count = 0; count < 50; count++)
{
sam = s + h;
s = h;
h = sam;
printf("%lu", sam);
if (count == 49)
putchar('\n');
else
{
printf(", ");
}
}
return (0);
}
