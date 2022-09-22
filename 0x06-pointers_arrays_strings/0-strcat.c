#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int m, s;

	for (m = 0; dest[m] != '\0'; m++)
		;

	for (s = 0; src[m] != '\0'; s++)
	{
		dest[m] = src[s];
		m++;
	}

	dest[m] = '\0';
	return (dest);
}
