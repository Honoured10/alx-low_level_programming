#include <stdio.h>
/**
  * main - sum even fibonacci numbers under 4 million.
  * Return: Nothing.
  */
int main(void)
{
unsigned long count, s, h, sam, sums;

s = sums = 0;
h = 1;
for (count = 0; count < 50; count++)
{
sam = s + h;
s = h;
h = sam;
if (sam % 2 == 0 && sam < 4000000)
{
sums += sam;
}
}
printf("%lu\n", sums);
return (0);
}
