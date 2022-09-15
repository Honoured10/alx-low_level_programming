#include "main.h"
/**
 * print_number - prints an integer
 * @n: Input an integer
 */

void print_number(int n)
{
	long len, sam, i, temp, expo;

	sam = n;
	expo = len =  1;
/*Check negatives*/
	if (sam < 0)
	{
		sam *= -1;
		_putchar('-');
	}

/**/
	temp = sam;
	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}

/*Create Exponent*/
	for (i = 1; i < len; i++)
		expo *= 10;
/*Main */
	while (expo > 1)
	{
		_putchar((sam / expo) % 10 + '0');
		expo /= 10;
	}
	_putchar(sam % 10 + '0');
}
