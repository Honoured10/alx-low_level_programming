#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int l, m;

	l = 0;
	for (m = 0; dest[m] != '\0'; m++)
		;
	while (src[l] != '\0')
	{
		dest[m + l] = src[l];
		l++;
	}
	return (dest);
}
