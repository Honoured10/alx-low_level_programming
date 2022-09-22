#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to print
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m, u;

	m = 0;
	for (u = 0; dest[u] != '\0'; u++)
		;
	while (src[m] != '\0' && m < n)
	{
		dest[u + m] = src[m];
		m++;
	}
	return (dest);
}
