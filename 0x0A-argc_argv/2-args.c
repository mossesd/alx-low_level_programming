#include <stdio.h>

/**
 * main - prints the value of argv
 * @argc: the number of command line arguments
 * @argv: the value of the command line arguments
 * Return: always succes
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
