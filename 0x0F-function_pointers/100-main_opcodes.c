#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * error - Print the error
 * @status: Number to exit
 **/
void error(int status)
{
	printf("Error\n");
	exit(status);
}


/**
 * main - Entry point
 * @aux: Size of argv
 * @argv: Arguments
 * Return: 0
 **/
int main(int aux, char **argv)
{

	int i;

	if (aux != 2)
		error(1);

	aux = atoi(argv[1]);
	if (aux < 0)
		error(2);

	unsigned char *bytes = (unsigned char *) main;

	for (i = 0; i < aux; i++)
		printf("%x%c", bytes[i], (i < aux - 1) ? ' ' : '\n');

	return (0);
}
