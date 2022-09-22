#include "main.h"
/**
 * _strncpy - copies a string up to n
 * @dest: Destination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int sam;

	for (sam = 0; src[sam] != '\0' && sam < n; sam++)
		dest[sam]	= src[sam];
	while (sam < n)
		dest[sam++] = '\0';
	return (dest);
}
