#include <stdio.h>
/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below 1024.
  * Return: Nothing.
  */

int main(void)
{
int h, sam;

for (s = 0; s < 1024; s++)
if (s % 3 == 0 || s % 5 == 0)
sam += s;
printf("%d\n", sam);
return (0);
}
